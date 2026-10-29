# Target Sum:-
## Problem:-
   You are given an integer array nums and an integer target.
   You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.
   Return the number of different expressions that you can build, which evaluates to target.
## Example:-
   Input: nums = [1,1,1,1,1], target = 3
   Output: 5
## Approach:-
   Mathematical Reduction to Subset Sum
       Assigning a + or - sign to each element divides the array into two distinct sets:
       𝑆1: The set of numbers with a positive sign (+).
       𝑆2: The set of numbers with a negative sign (-).
     We know that:
       Sum(𝑆1)−Sum(𝑆2)=target
       Sum(𝑆1)+Sum(𝑆2)=totalSum
       Adding these two equations together eliminates 
       Sum(S1)=totalSum+target/2
​     The problem now simplifies to: Find the number of subsets in nums whose sum equals Sum(𝑆1).
  Edge Case Check:-
     Before running DP, eliminate scenarios where no valid assignment exists:
     Target magnitude out of bounds: If totalSum<∣target∣, it's impossible to reach the target → return 0.
  Odd sum combination: If (totalSum+target) is odd or negative,Sum(𝑆1) cannot be an integer → return 0.
  Dynamic Programming Strategy:-
      Use a 1D DP array dp of size(Sum(𝑆1)+1), initialized to 0.
     Base Case:
       dp[0] = 1: There is 1 way to make a sum of 0 (by selecting an empty subset).
    State Transition:
       For each number num in nums, iterate backwards from Sum(𝑆1) down to num:
          dp[j]=dp[j]+dp[j−num]
    Why traverse backwards? Traversing backwards ensures each element is only counted once per subset (0/1 Knapsack property) without overwriting values needed for the current iteration.
   Final Result: 
       Return dp[Sum(S1)].
## Complexity :-
   Time Complexity:𝑂(𝑁×targetSum)
   Space Complexity: 𝑂(targetSum).
   
