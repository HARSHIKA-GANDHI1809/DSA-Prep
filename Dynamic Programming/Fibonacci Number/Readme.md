# Fibonacci Number:-
## Problem:-
   The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
    F(0) = 0, F(1) = 1
    F(n) = F(n - 1) + F(n - 2), for n > 1.
    Given n, calculate F(n).

## Example:-
  Input: n = 2
  Output: 1
## Approach:-
   Identify the Base Cases: Determine the simplest inputs whose answers are already known (e.g., F(0) = 0, F(1) = 1 for Fibonacci).
   Initialize the DP Table: Create a data structure—typically a 1D array (vector<int> dp) or a 2D matrix—sized appropriately to hold solutions for all subproblems up to N.
   Fill the Base Cases: Seed your table with the known answers at their corresponding starting indices.
   Determine the Iteration Order (State Transition): Use iterative loops to calculate each entry based on previously computed subproblem values (e.g., dp[i] = dp[i-1] + dp[i-2]).
   Extract the Result: Return the value stored at the target index (typically dp[n] or dp[rows][cols]).
## Complexity:-
   Time Complexity:--O(n)
   Space Complexity:-O(n)
