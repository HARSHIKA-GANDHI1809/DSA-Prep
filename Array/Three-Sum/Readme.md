# 3-Sum
## Problem:-
   Given an integer array nums, return all the triplets [nums[i],nums[j],nums[k]] such that (i!=j!=k) and nums[i] + nums[j] + nums[k] == 0.
## Example:-
   Input: nums = [-1,0,1,2,-1,-4]
   Output: [[-1,-1,2],[-1,0,1]]
## Approach:-
   Sorting the array in non-decreasing order (O(nlogn)) allows us to:
       Easily skip duplicate numbers to avoid duplicate triplets in the result.
       Directionally move two pointers based on whether our current sum is too small or too large.
   Fix the first element using a loop from index i = 0 to n - 3.
   Skip Duplicates: If i > 0 and nums[i]==nums[i - 1],skip to the next index to prevent processing the same starting number twice. 
   For each fixed element nums[i], find two numbers nums[j] and nums[k] such that nums[i] + nums[j] + nums[k] == 0:
       Set j = i + 1 (left pointer) and k = n - 1 (right pointer).
   While j < k:
       Calculate sum = nums[i] + nums[j] + nums[k].
       sum < 0: The sum is too small. Move the left pointer rightward (j++) to increase the total sum.
       sum > 0: The sum is too large. Move the right pointer leftward (k--) to decrease the total sum.
       sum == 0:
           Add {nums[i], nums[j], nums[k]} to the result.
           Move both pointers (j++ and k--).
           Skip duplicate values for j and k:
           while (j < k && nums[j] == nums[j - 1]) j++;
           while (j < k && nums[k] == nums[k + 1]) k--;
## Complexity:-
     Time Complexity:-O(n^2)
     Space Complexity:-O(1)
           
           
           
           
