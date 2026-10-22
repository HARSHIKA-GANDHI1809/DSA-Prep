# Minimum Path Sum:-
## Problem:-
   Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
## Example:-
   Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
   Output: 7
## Approach:-
   Initialize a 1D vector prev of size m with zeros to represent the previous row's computed minimum sums.
     Iterate through each row i from 0 to n - 1:
       Create a new 1D vector cur of size m for the current row.
     Iterate through each column j from 0 to m - 1:
       If we are at the very start (0, 0), cur[0] = grid[0][0].
     Otherwise, compute the two possible paths:
       Up: Take the value from prev[j] (if i > 0, else add a large number like 1e9 to ignore out-of-bound moves).
       Left: Take the value from cur[j - 1] (if j > 0, else add 1e9).
     Set cur[j] = grid[i][j] + min(up, left).
     After finishing the row, update prev = cur to prepare for the next iteration.
     Return prev[m - 1], which holds the minimum path sum to the bottom-right corner.
## Complexity:-
   Time Complexity:-O(n*M)
   Space Complexity:-O(M)
   
   
