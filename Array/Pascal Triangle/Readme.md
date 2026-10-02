# Pascal Triangle
## Problem:-
    Given an integer numRows, return the first numRows of Pascal's triangle.
## Example:-
  Input: numRows = 5
  Output: [[1]
          [1,1]
          [1,2,1]
          [1,3,3,1]
          [1,4,6,4,1]]
## Approach:-
  Combinatorial Generation (nCr):-
      For each row i from 1 to numRows:
         Start with the first element as 1.
         Iteratively multiply by (i - col) and divide by col to get the next element in that row.
         Store the row and append it to the overall solution.
## Complexity:-
   Time complexity:-O(n^2)
   Space Complexity:-O(1)
   
         
