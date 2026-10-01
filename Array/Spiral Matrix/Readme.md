# Sprial Mtrix
## Problem:-
     Given a n*m matrix which goes on in spiral form
## Example:-
   INPUT:- [1 2 3] [4 5 6] [7 8 9]  
   Output:-  1 2 3
             8 9 4
             7 6 5
## Approach:-
    Maintain four pointers that define the active bounding box of unvisited elements:
        top = 0 (topmost row index)
        bottom = matrix.size() - 1 (bottommost row index)
        left = 0 (leftmost column index)
        right = matrix[0].size() - 1 (rightmost column index)
    Run a while loop as long as valid boundaries exist (top <= bottom and left <= right). During each full iteration of the loop, shrink the box inwards across four directions:
       traverse from row top to bottom along column right.
       Decrement right-- (the right column is now fully processed).
    Bottom Row (Right to Left):   
       Check if (top <= bottom) to avoid re-traversing a row when a single row remains.
       Traverse from column right to left along row bottom.
       Decrement bottom-- (the bottom row is now fully processed).
    Left Column (Bottom $\to$ Top):
       Check if (left <= right) to avoid re-traversing a column when a single column remains.
       Traverse from row bottom to top along column left.
       Increment left++ (the left column is now fully processed).
## Complexity:-
   Time Complexity:-O(n*m)
   Space Complexity:-O(1)
       
       
       
             
