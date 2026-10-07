# Merge Sorted Array without Extra space:-
## Problem:-
    You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
     Merge nums1 and nums2 into a single array sorted in non-decreasing order.
## Example:-
    Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    Output: [1,2,2,3,5,6]
## Approach:-
    Treat nums1 (first m elements) and nums2 as two sections of a continuous sequence of length m + n.
    Compare elements across section boundaries using index offsets (left and right).
    Reduce gap = ceil(gap / 2) after completing each pass across the arrays.
    Finally, copy the sorted elements of nums2 into the tail of nums1.
 ## Complexity:-
    Time Complexity:-O((m + n) \log(m + n))
    Space Complexity:-O(1)
