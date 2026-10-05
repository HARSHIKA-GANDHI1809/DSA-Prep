# 4-Sum
## Problem:-
    Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
      0 <= a, b, c, d < n.
      a, b, c, and d are distinct.
      nums[a] + nums[b] + nums[c] + nums[d] == target.
## Example:-
    Input: nums = [1,0,-1,0,-2,2], target = 0
    Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
## Approach:-
    Sorting the array in non-decreasing order takes O(Nlog N) time. This enables the two-pointer approach and makes it easy to skip duplicate elements.
    Fix the First Two Numbers (i and j)
          Iterate i from 0 to n - 1.
          Iterate j from i + 1 to n - 1.
          These two outer loops fix the first two numbers, reducing the remaining problem to finding two numbers (nums[k] and nums[l]) that sum up to target - nums[i] - nums[j].
    Two-Pointer Search (k and l):
          Set k = j + 1 (left pointer) and l = n - 1 (right pointer).
          Calculate sum = nums[i] + nums[j] + nums[k] + nums[l] using long long to prevent 32-bit integer overflow.
          If sum == target: Add the four-element combination to the results, then increment k and decrement l.
          If sum < target: Increment k to increase the total sum.If sum > target: Decrement l to decrease the total sum.  
     Outer loops: Skip continuous identical values for i (nums[i] == nums[i-1]) and j (nums[j] == nums[j-1]).
     Inner pointers: Once a valid quadruplet is found, advance k and l past any identical elements (nums[k] == nums[k-1] and nums[l] == nums[l+1]) to prevent adding identical quadruplets.   
## Complexity:-
    Time Complexity:-O(n^3)
    Space Complexity:-O(1)
     
