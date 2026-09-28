# Single number-2
## Problem:-
   Given an array with all the elements appears 3 times except 1 elemennt and we have to print that element
## Example
   Arr[]={2,2,3,3}
   output :- 3
## Approach:-
    Intialise result=0 to reconstruct the result
    Iterate Bit Positions: Loop through all bit positions from 0 to 31 (representing every bit of a 32-bit integer).
    Count the bit according to bit position i 
        Set a counter count = 0.
        Loop through every number in the array.
        Shift the number right by i positions and use bitwise AND with 1 ((num >> i) & 1) to extract the bit at position i.
        If the bit is 1, increment count.
    Check if count % 3 != 0:
        If true, it means the unique number has a 1 at position i.
        Set the i-th bit in result using result |= (1 << i).
    Return Answer: After checking all 32 bit positions, return result.
## Complexity:-
   Time complexity:- O(N)
   Space complexity:-O(1)
