# 0/1 Knapsack 
## Problem:-
   Given two integer arrays, val and wt, each of size n, which represent the values and weights of n items respectively, and an integer W representing the maximum capacity of a knapsack, determine the maximum value achievable by selecting a subset of the items such that the total weight of the selected items does not exceed the knapsack capacity W.
   Each item can either be picked in its entirety or not picked at all (0-1 property). The goal is to maximize the sum of the values of the selected items while keeping the total weight within the knapsack's capacity.
## Example:-
   Input: val = [60, 100, 120], wt = [10, 20, 30], W = 50
   Output: 220
## Approach:-
   Initialization:
     Declare a 1D vector prev of size W + 1, initialized with 0.
     Base Case (0-th Item): For all capacities w from wt[0] up to W, set prev[w] = val[0].
   Iterate Through Items (ind from 1 to n - 1):
     For each item, iterate capacity w backwards from W down to 0:
       not_taken: prev[w]
       taken: val[ind] + prev[w - wt[ind]] (only if wt[ind] <= w)
   Update: Set prev[w] = max(taken, not_taken)
   Result:
     Return prev[W], which contains the maximum value achievable for capacity W using all n items.
  ## Complexity:-
     Time Complexity;-O(N*w)
     Space Complexity:-O(W)
