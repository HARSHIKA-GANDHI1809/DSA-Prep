# Minimum Falling Path Sum:-
## Problem:-
  Given an n x n array of integers matrix, return the minimum sum of any falling path through matrix.
  A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1).
## Example:-
  Input: matrix = [[2,1,3],[6,5,4],[7,8,9]]
  Output: 13
## Approach:-
  The Intuition (Bottom-Up Tabulation)
    For any cell at position (i, j) in the matrix, a falling path can only come from three positions in the row directly above it:
      Directly above: (i-1, j)
      Diagonally left: (i-1, j-1)
      Diagonally right: (i-1, j+1)
      To minimize the path sum at (i, j), you take the current cell's value and add the minimum of those three choices from the row above:
        DP[i][j] = matrix[i][j] + min begin{cases} DP[i-1][j] , DP[i-1][j-1] , DP[i-1][j+1] end{cases}.
        
  Space Optimization (O(N) Space)
     Instead of keeping a full 2D DP table of size N * N, notice that computing the values for row i only requires the values from row i-1.
     We initialize a 1D vector prev with the elements of the first row (matrix[0]).
     As we iterate downward through each row i, we calculate a new 1D vector cur representing the minimum falling path sums for the current row.
     Once the current row is computed, we update prev = cur and move on. 
     This drops the memory footprint from O(N^2) down to O(N).
  Handling Boundaries
    If you are at the leftmost column (j = 0), there is no diagonal-left element. 
    If you are at the rightmost column (j = n - 1), there is no diagonal-right element.
    We handle this gracefully using ternary checks:
      int ld = (j - 1 >= 0) ? prev[j - 1] : 1e9;
      int rd = (j + 1 < n) ? prev[j + 1] : 1e9;       
    If a path goes out of bounds, we assign 1e9 (infinity) so that min() ignores it.
  Final Answer:
    Once you reach the last row, the minimum falling path can end at any column. 
    Therefore, the final answer is simply the minimum value present in the final prev vector, which you extract using:
      return *min_element(prev.begin(), prev.end
## Complexity:-
   Time Complexity:-O(N*N)
   Space Complexity:-O(n)
  
  
