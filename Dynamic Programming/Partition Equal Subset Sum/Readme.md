# Partition Equal Subset Sum:-
## Problem:-
   Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.
## Example:-
   Input: nums = [1,5,11,5]
   Output: true
## Approach:-
   Calculate the Total Sum:
      Find the sum of all elements in the nums array (totalsum).
   Parity Check: 
      If totalsum is odd, it is mathematically impossible to divide it into two equal integer subsets. 
      You can immediately return false.
   Define the Target:
      If the sum is even, the problem transforms into: "Can we find a subset of numbers in nums that adds up exactly to {target} = {{totalsum}}/{2}?" If such a subset exists, the remaining elements will naturally sum up to the other half.
   0/1 Knapsack Pattern with Space Optimization
      Your subsetTok function solves this variation of the classic Subset Sum / 0/1 Knapsack problem using a space-optimized DP approach:
      Defining the DP State:
       Instead of maintaining a full 2D table of size N*{target}, you only need two 1D vectors: 
          prev and cur of size {target} + 1.
            prev[target] stores whether a specific target sum is achievable using the elements considered so far.
   Base Case:
      prev[0] = cur[0] = true;
       A target sum of 0 is always achievable by picking an empty subset.
   Transition Logic (The Choice):
      For each element arr[ind] and for every possible target from 1 to k:
        Not Take: You can choose not to include the current element, meaning the result carries over from the previous row:
         nottake = prev[target].
        Take: If the current element is less than or equal to the target (arr[ind] <= target), you can check if the remaining sum was achievable previously:
         take = prev[target - arr[ind]].
   Combine: The current state is true if either choice works:
     cur[target] = take | nottake;
   Space Reduction:
       After finishing a row, you shift rows by setting prev = cur to save memory, reducing your space complexity from O(N*{target}) down to O({target}).
 ## Complexity:-
    Time Complexity:-O(n*4)+o(n)
    Space Complexity:-O(target)

       
       
  
