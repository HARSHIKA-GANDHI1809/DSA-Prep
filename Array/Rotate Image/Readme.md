#Roatae image
## Problem:-
   Given an n*n matrix we have to rotate it by 90°.
## Example:-
   1 2 3       7 4 1 
   4 5 6   --> 8 5 2
   7 8 9       9 6 3
## Approach:-
   Transpose the Matrix:-
       First, flip the matrix across its main diagonal (top-left to bottom-right). This converts all rows into columns.
       Swap matrix[i][j] with matrix[j][i] for all i<j.
        Original Matrix:          Transposed Matrix:
         [ 1  2  3 ]               [ 1  4  7 ]
         [ 4  5  6 ]   -------->   [ 2  5  8 ]
         [ 7  8  9 ]               [ 3  6  9 ]
  Reverse Each Row:-
      Reverse each row matrix[i] from start to end (e.g., using std::reverse).
       Transposed Matrix:        Rotated Matrix (Final):
         [ 1  4  7 ]               [ 7  4  1 ]
         [ 2  5  8 ]   -------->   [ 8  5  2 ]
         [ 3  6  9 ]               [ 9  6  3 ]
## Complexity:-
   Time complexity:-O(N*n)
   Space complexity:-O(1)
   
         
         
         
         

   
