# SingleNumber-1
## Problem:-
  Given an array in which all elements appear 2 times except one of those element .
## Example:-
  Arr[]={2,2,1}
  outpur=1
## Approach:-
  Use of XOR operation 
    Initialize a variable result = 0.
    Iterate through every integer num in the array nums.
    Perform a bitwise XOR between result and num (result ^= num).
    Every number that appears twice will eventually pair up and cancel itself out to 0.
    The only number left stored in result will be the unique element that appeared only once.
## Complexity:-
   Time Complexity:- O(n)
   Space Complexity:-O(1)
   
