# Maximum Product Subarray:-
## Problem:-
   Given an integer array nums, find a subarray that has the largest product, and return the product.
## Example:-
   Input: nums = [2,3,-2,4]
   Output: 6
## Approach:-
   Initialization:
      pre = 1: Keeps track of the running product from left to right.
      suff = 1: Keeps track of the running product from right to left.
      ans = INT_MIN: Keeps track of the global maximum product found.
  The Loop (Iterating from i = 0 to n-1):
     Handling Zeros: Zeros break contiguous subarrays because any product multiplied by 0 becomes 0.
      if(pre == 0) pre = 1;
      if(suff == 0) suff = 1;
 If pre or suff hits 0, we reset it back to $1$ so the next iteration can start a fresh subarray product.
 Updating Products:pre = pre * nums[i] (Computes the prefix product from the start)suff = suff * nums[n - i - 1] (Computes the suffix product from the end)
 Updating the Answer:ans = max(ans, max(pre, suff)) captures the highest product encountered across both traversals at every step.   
## Complexity:-
  Time Complexity:-O(n)
  Space Complexity:-O(1)
 
