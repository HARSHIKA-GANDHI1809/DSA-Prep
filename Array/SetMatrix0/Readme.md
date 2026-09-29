# Set Matrix-0
## Problem:-
   The row/column which contains 0 all the corresponding row value & column value will be 0
## Example:-
   Input:-[[1,1,1],[1,0,1],[1,1,1]]
   Output:-[[1,0,1],[0,0,0],[1,0,1]]
## Approach:-
     Initialize Flags & Mark Zeroes:
        Traverse the entire matrix from cell (0,0) to (n-1, m-1).
        Whenever matrix[i][j] == 0: 
            Mark its row:  
                  matrix[i][0] = 0.
            Mark its column: 
                  If j /0, set matrix[0][j] = 0
                  If j == 0, set col0 = 0 (indicating the 0th column has a zero).
      Fill Inner Submatrix:
            Loop through the inner cells starting from index (1,1).
            If either its row header (matrix[i][0] == 0) or column header (matrix[0][j] == 0) is marked, set matrix[i][j] = 0.
      Handle First Row (Row 0):
            Check if matrix[0][0] == 0.
            If true, set all elements in row 0 (matrix[0][0] through matrix[0][m-1]) to 0.
      Handle First Column (Column 0):
             Check if col0 == 0.
             If true, set all elements in column 0 (matrix[0][0] through matrix[n-1][0]) to 0.
## Complexity:-
     Time complexity:-O(m * n)
     Space complexity:-O(1)
     
