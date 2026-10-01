# Subarray with sum equals k
## Problem:-
    Given an array we have to count the number of subarray which which will give sum equal to k
## Example:-
    Input:-
       [1 2 3 -3 1 1 1 4 2 -3]
    Output:-
      8
## Approach:-
   Initialize Data Structures
       Hash Map (mpp): Stores frequency of each prefix sum encountered so far.
       Base Case (mpp[0] = 1): Represents an "empty prefix sum" before the array starts.
       This ensures that any prefix sum that is directly equal to k itself is correctly counted.
       Variables: presum = 0 (tracks running sum) and count = 0 (tracks matching subarrays).
   Iterate Through the Array
       Add the current element nums[i] to presum.
       Calculate remove = presum - k.
       Check Hash Map: If remove exists in mpp, add its stored frequency to count.
       Update Hash Map: Increment the frequency of the current presum in mpp (mpp[presum]++).   
   Return count.
## Complexity:-
    Time complexity:-O(n)
    Space Complexity:-O(n)
    
   
    
