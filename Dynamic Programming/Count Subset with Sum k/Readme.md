# Count Subset with Sum k
## Problem:-
   Given an array arr of n integers and an integer K, count the number of subsets of the given array that have a sum equal to K. Return the result modulo (109 + 7).
## Example :-
  Input: arr = [2, 3, 5, 16, 8, 10], K = 10
  Output: 3
## Approach:-
  Problem Definition:
     Find the total number of subsets in array nums that sum up to k. 
     Each element can either be picked or not picked.
  Base Case & Zero Handling:
     For the first element nums[0]:
       If nums[0] == 0, there are 2 ways to get sum 0: the empty set {} and the set {0} (prev[0] = 2).
       Otherwise, there is 1 way to get sum 0 (the empty set {}), and if nums[0] <= k, 1 way to get sum nums[0].
 State Transition:
     For each element nums[i] and target sum:
       Not Pick: Number of ways to form sum without nums[i] -> prev[sum]
       Pick: Number of ways to form sum - nums[i] using previous elements-> prev[sum - nums[i]]
         (if nums[i] <= sum)
       Total ways:{cur}[{sum}] = ({notpick} + {pick}) mod{10^9 + 7}
     Space Optimization:
       Instead of an N * (K + 1) table, keep only two 1D arrays (prev and cur) of size K + 1, or iterate backwards on a single 1D array from k down to nums[i].
# Complexity:-
   Time Complexity:{O}(N*K) 
   Space Complexity: {O}(K)
