# Spiral Matrix-2
## Problem:-
  Given a positive integer n, generate an n x n matrix filled with elements from 1 to n^2 in spiral order.
## Example:-
  Input: n = 3
  Output: [[1,2,3],[8,9,4],[7,6,5]]
## Approach:-
    Pre-allocate an $n \times n$ matrix initialized to zeros.
    Define four boundary pointers tracking the unvisited subgrid:
        top = 0 (first row)
        bottom = n - 1 (last row)
        left = 0 (first column)
        right = n - 1 (last column)
    Maintain a counter val = 1 for the next value to insert.
    Continue filling while top <= bottom and left <= right.
    Traverse the 4 Edges of Current Layer:-
       Left to Right along row top: Iterate column index i from left to right, assigning matrix[top][i] = val++. Shift top++ downward.
       Top to Bottom along column right: Iterate row index i from top to bottom, assigning matrix[i][right] = val++. Shift right-- leftward.
       Right to Left along row bottom: Check if (top <= bottom) to avoid overlapping, then iterate column index i from right down to left, assigning matrix[bottom][i] = val++. Shift bottom-- upward.
       Bottom to Top along column left: Check if (left <= right) to avoid overlapping, then iterate row index i from bottom down to top, assigning matrix[i][left] = val++. Shift left++ rightward.
    When val reaches n^2 + 1, all positions are filled. Return the populated matrix. 
## Complexity:-
   Time Complexity:-O(n^2)
   Space Complexity:-O(1)
    
  

  
