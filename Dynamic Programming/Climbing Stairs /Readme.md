# Climbing Stairs
## Problem:-
   You are climbing a staircase. It takes n steps to reach the top.
   Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
## Example:-
   Input: n = 2
   Output: 2
   Explanation: There are two ways to climb to the top.
    1. 1 step + 1 step
    2. 2 steps
## Approach:-
   To reach step n, you can only come from two possible places:
       Step n-1 (by taking a single 1-step jump)
       Step n-2 (by taking a single 2-step jump)
       Therefore, the total number of ways to reach step n is the sum of the ways to reach step n-1 and the ways to reach step n-2:
            Ways(n) = Ways(n-1) + Ways(n-2)
   Base cases:
      To reach step 0, there is 1 way (doing nothing).
      To reach step 1, there is 1 way (1 step).
      Building forward:
        Step 2 = Ways(1) + Ways(0) = 1 + 1 = 2
        Step 3 = Ways(2) + Ways(1) = 2 + 1 = 3
        Step 4 = Ways(3) + Ways(2) = 3 + 2 = 5
             ...and so on up to n.   
## Complexity:-
    Time Complexity:-O(N)
    Space Complexity:-O(1)
       
