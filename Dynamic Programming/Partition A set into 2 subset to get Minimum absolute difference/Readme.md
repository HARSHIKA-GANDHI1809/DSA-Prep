# Partition a set into two subsets with minimum absolute sum difference
## Problem:-
  Given an array arr of n integers, partition the array into two subsets such that the absolute difference between their sums is minimized.
## Example :-
  Input: arr = [1, 7, 14, 5]
  Output: 1
## Approach:-
   Mathematical Objective:-
      Let S be the sum of all elements in the array. If we split the array into two subsets with sums S_1 and S_2, then S_2 = S - S_1.
      The absolute difference between the two subset sums is:
       {Diff} = S_2 - S_1} = (S - S_1) - S_1
              = S - 2S_1
      To make this difference as small as possible, S_1 should be as close to [S / 2 ] as possible without exceeding it.
  Tabulation / Dynamic Programming Logic
      The problem reduces to finding the largest achievable subset sum S_1 such that S_1 <= S / 2
      State: dp[target] represents whether a subset sum equal to target can be formed using the elements processed so far.
     Transition: For each element arr[ind]:
       Not Take: nottake = prev[target]
       Take: take = prev[target - arr[ind]] (if arr[ind] <= target)
         cur[target] = take || nottake
       Base Case: Sum 0 is always possible using an empty subset (prev[0] = cur[0] = true).
   Step-by-Step Algorithm
       Compute the array sum S = sum {arr}[i].
       Set the target bound to K = [ S / 2].
       Run the standard subset-sum DP up to sum K.
       Iterate backwards from s_1 = K down to 0 and find the first value where prev[s1] == true.
       Return S - 2 .... s_1 as the minimum difference.
 ## Complexity:-
    Time Complexity:-O(n*S)
    Space Complexity:-O(S)
