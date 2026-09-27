# Permutaion for Duplicate elements
## Problem:
  Given an array with duplicate elements we have to print all the unique permutaions posiible
## Example:
  Arr{}=[1,1,2]
   ouput:-[1,1,2],[1,2,1],[2,1,1]
## Approach:-
   will sort an array 
   use of do-whilw loop which will store all the unique permutations
   stdl:next_permutation:(in built function) which recurrsively works till permutation returns false
 ## Complexity:-
   Time Complexity:-O(k.n!) where k is no of unique leaves
   Space Complexity:-O(n) 
