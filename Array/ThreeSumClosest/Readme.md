# 3-Sum Closest
## Problem:-
    You are given an integer array nums of length n and an integer target.Find three integers at distinct indices in nums such that the sum is closest to target.
    Return the sum of the three integers.
## Example:-
   Input: nums = [-1,2,1,-4], target = 1
   Output: 2
## Appraoch:-
   Sort nums in ascending order. Sorting enables us to move two pointers (j and k) predictably based on whether our current sum is smaller or larger than the target
   Initialize a variable closestSum to track the sum closest to target seen so far (e.g., set closestSum = nums[0] + nums[1] + nums[2]).
   Iterate through the array with index i from 0 to n - 3. Here, nums[i] acts as the fixed first element of the triplet.
   For each fixed i, set two pointers:
       Left pointer: j = i + 1
       Right pointer: k = n - 1
   While j < k:
      Calculate sum = nums[i] + nums[j] + nums[k].
      Update Best Distance: Compare abs(target - sum) with abs(target - closestSum). If sum is closer to target, update closestSum = sum.
      Adjust Pointers:
         If sum < target: Move j right (j++) to increase the sum.
         If sum > target: Move k left (k--) to decrease the sum.
         If sum == target: Return sum immediately, as a difference of 0 cannot be improved.
   After all loops finish, return closestSum.
## Complexity:-
    Time Complexity:-O(n^2)
    Space Complexity:-O(1) or O(logn)
    

 
   
   
