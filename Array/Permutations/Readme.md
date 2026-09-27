# Permutaions:-
## Problem:-
  Given an array we have to find all the possible permutaions in sorted order
## Example:-
  array{}=[1,2,3]
  output=[1,2,],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]
## Approach:-
       Sort nums in ascending order 
       use of do-while loop to push the current state of nums into result vector
       then call recursive function in loop condition.It generates the next permutation in place and returns true until no more permutation remain.
## Time complexity:-
     Time complexity:- O(n!*n)
     Space Complexity:- O(n)
  
  
