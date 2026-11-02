# Counting Bits:-
## Problem:-
   Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
## Example:-
   Input: n = 2
   Output: [0,1,1]
## Approach:-
   To solve this in linear time without using built-in popcount functions, we can leverage previously computed values (Dynamic Programming).
   Notice that:
     Any number i can be related to i / 2 (which is right-shifting i by 1, written as i >> 1).
     The number of set bits in $i$ is equal to the number of set bits in i / 2 plus the least significant bit (i & 1).
     Recurrence relation: ans[i] = ans[i >> 1] + (i & 1)
## Complexity:-
   Time Complexity:-O(N)
   Space Complexity:-O(n)
