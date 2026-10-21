# Unique Path:
## Problem:-
  There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
  Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
  The test cases are generated so that the answer will be less than or equal to 2 * 109.
## Example:-
  Input: m = 3, n = 7
  Output: 28
## Approach:-
  Intuition:-To reach any cell (i, j) in the grid, the robot can only come from two possible directions:
    From above: (i - 1, j)
    From the left: (i, j - 1)
  Therefore, the total number of unique paths to reach cell (i, j) is the sum of paths from those two cells:
    {paths}(i, j) = {paths}(i - 1, j) + {paths}(i, j - 1)
  Base Case (First Row):
     Initialize a 1D vector prev of size n with all elements set to 1 (vector<int> prev(n, 1);).
       There is only 1 way to reach any cell in the very first row (by moving strictly right).
     Iterating Through Rows (i from 1 to m - 1):
       Create a temp vector for the current row.
       Set temp[0] = 1 because there is always only 1 way to reach the first column of any row (by moving strictly down).
     Iterating Through Columns (j from 1 to n - 1):
       Compute the paths for the current cell using the recurrence relation:
         {temp}[j] = {prev}[j] + t{temp}[j - 1]
         prev[j] represents the number of paths coming from above.
         temp[j - 1] represents the number of paths coming from the left.
    Transition:After finishing a row, update prev = temp so the current row becomes the "previous row" for the next iteration.
    Result:After the loops finish, prev[n - 1] contains the total number of unique paths to the bottom-right corner.
  ## Complexity:-
   Time Complexity:-O(N*M)
   Space Complexity:-O(n)
