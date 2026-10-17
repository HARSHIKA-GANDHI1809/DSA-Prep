# House Robber-2
## Problem:-
  You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
  Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
## Example:-
  Input: nums = [2,3,2]
  Output: 3
## Approach:-
  Since house 0 and house n-1 are adjacent in a circle, you cannot rob both.
  This breaks the circular problem down into two linear choices:
   Exclude the first house and consider houses from index 1 to n-1.
     (Stored in temp1)
   Exclude the last house and consider houses from index 0 to n-2. 
     (Stored in temp2)
 The maximum amount you can rob from the circular street will simply be the maximum of these two linear scenarios:
     {Result} = max({HouseRobber}({temp1}), {HouseRobber}({temp2}))
## Complexity:-
  Time Complexity:-O(n)
  Space Complexity:-O(1)
     
     
     

 
