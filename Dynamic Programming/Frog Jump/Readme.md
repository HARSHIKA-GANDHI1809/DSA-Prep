# Frog Jump:-
## Problem:-
   A frog wants to climb a staircase with n steps. Given an integer array heights, where heights[i] contains the height of the ith step.
   To jump from the ith step to the jth step, the frog requires abs(heights[i] - heights[j]) energy, where abs() denotes the absolute difference. The frog can jump from any step (ith) either one (i+1) or two (i+2) steps, provided it exists.
   Return the minimum amount of energy required by the frog to go from the 0th step to the (n-1)th step.
## Example:-
  Input: heights = [2, 1, 3, 5, 4]
  Output: 2
## Approach:-
  1. Problem Breakdown
      The frog starts at index 0 and wants to reach index n - 1.
      From index i, the frog can jump to:i + 1 (cost: heights[i] - heights[i-1])
                                         i + 2 (cost:heights[i] - heights[i-2])
     The objective is to minimize the total energy used.
  2. State & Transition Equation
       Let dp[i] be the minimum energy required to reach index i.
       Base Case:dp[0] = 0 (starting point requires zero energy).
       Transitions for i >= 1:
             1-step jump (fs): Coming from i - 1 fs = dp[i - 1] + heights[i] - heights[i - 1]
             2-step jump (ss): Coming from i - 2 (only valid if i>=2)
               ss = dp[i - 2] + heights[i] - heights[i - 2]
       Recurrence:dp[i] = min(fs, ss)
  3. Space Optimization Idea:
       To compute dp[i], you only ever need two previous values:
             dp[i - 1] (stored in variable prev)
             dp[i - 2] (stored in variable prev2)
       Instead of keeping an entire dp array of size N, update these two variables at each step:
           Compute curr = min(fs, ss).
           Shift states: prev2 = prev, prev = curr.
## Complexity:-
  Time Complexity:-O(N)
  Space Complexity:-O(1)
  
