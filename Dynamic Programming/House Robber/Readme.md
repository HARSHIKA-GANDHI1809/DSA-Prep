# House Robber
## Problem:-
  You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
  Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
## Example:-
  Input: nums = [1,2,3,1]
  Output: 4
## Approach:-
   Base Case:
     If there are no houses (n == 0), return 0. If there is only one house, the max profit is just nums[0].
   Iteration:
     We start looping from house i = 1 up to n-1:
       Calculate take = nums[i] + prev2 (adding current house money to the money from two steps back).
       (Note: The condition if (i > 1) ensures we don't look behind bounds improperly, though initializing prev2 cleanly can also achieve this).
       Calculate not_take = prev (keeping the max amount from the previous house).
       Find the current maximum: curr = max(take, not_take).
       Shift Variables: Move the window forward by updating prev2 = prev and prev = curr.
    Result: After the loop finishes, prev holds the maximum amount of money you can rob without triggering alarms.
 ## Complexity:-
   Time Complexity:-O(n)
   Space Complexity:-O(1)
   
