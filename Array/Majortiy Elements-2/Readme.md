# Majority  Elements
## PROBLEM:-
      Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
## Example:-
     Input: nums = [3,2,3]
     Output: [3]
## Approach:-
     Maintain two potential candidates (el1, el2) and their respective frequency counters (count1, count2). Iteratively process each number in nums:-
          Match Candidate 1: If num == el1, increment count1++.
          Match Candidate 2: If num == el2, increment count2++.
          Empty Slot 1: Else if count1 == 0, assign el1 = num and set count1 = 1.
          Empty Slot 2: Else if count2 == 0, assign el2 = num and set count2 = 1
          Mismatch (Triplet Cancellation): Else (when num matches neither candidate and both candidate slots are filled), decrement both count1-- and count2--.
    The first pass only identifies potential candidates—it does not guarantee they appear more than floor n/3 floor times (e.g., in [1, 2, 3], candidates might be selected without meeting the threshold).    
          Reset count1 = 0 and count2 = 0
          Traverse nums again to calculate the exact frequencies of el1 and el2.
          If count1 > nums.size() / 3, add el1 to the result list.
          If count2 > nums.size() / 3, add el2 to the result list.  
## Complexity:-
    Time Complexity:- O(2n)
    Space Cmplexity:- O(1)  
    
     

 
