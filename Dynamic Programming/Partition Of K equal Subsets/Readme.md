# Partition of k equal Subsets:-
## Problem:-
  Given an integer array nums and an integer k, return true if it is possible to divide this array into k non-empty subsets whose sums are all equal.
## Example:-
   Input: nums = [4,3,2,3,5,2,1], k = 4
   Output: true
## Approach:-
   Check Prerequisite Validity:
     Calculate the total sum of nums. 
     If totalSum % k != 0, return false. 
     Define target = totalSum / k. 
     Sort nums in descending order. 
     If nums[0] > target, return false.
  Track Used Elements:
     Maintain a boolean array visited of size N (or a bitmask integer) to keep track of which elements have already been assigned to a subset.
  Backtrack Subsets Sequentially:
     Build one subset at a time:
       Maintain kRemaining (subsets left to form), currentSum (sum of current subset), and startIndex (search index in nums).
       Base Case: 
          When kRemaining == 1, return true because the remaining unvisited elements are guaranteed to sum up to target.
       Subset Complete: 
          If currentSum == target, recursively call the backtrack function for kRemaining - 1, resetting currentSum to 0 and startIndex to 0.
  Apply Branch Pruning:
      Iterate through nums starting from startIndex:
          Skip element if visited[i] == true or currentSum + nums[i] > target.
          Mark visited[i] = true, recurse, then unmark visited[i] = false.
  Key Optimization: 
      If currentSum == 0 and picking nums[i] fails, break early—starting a new subset with this number will never work.
## Complexity:-
   Time Complexity:-{O}(k . 2^N)
   Space Complexity:-O(N)
      
