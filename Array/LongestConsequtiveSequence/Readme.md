# Longest Consecutive Sequence
## Problem:-
   Given an array of n size we have to find lenght of longest consequtive array
## Example:-
   Arr[]={102,4,100,1,101,2,3,1}
   Output=4
## Approach:-
    Insert all elements of the array into an unordered_set. This automatically removes duplicates and allows for $O(1)$ average time lookup.
    Iterate through each unique element it in the set. Check if it - 1 exists in the set:  
           If  it - 1 exists: it cannot be the start of a consecutive sequence, so skip it.
           If it - 1 does NOT exist: it is the first element of a potential sequence.
    For every valid sequence start, initialize a counter count = 1 and incrementally check if x + 1 exists in the set using a while loop, updating the total length until the sequence breaks.       
    Maintain a running longest variable and update it with max(longest, count).
## Complexity:-
  Time complexity:- O(3n)
  Space Complexity:-O(1)
