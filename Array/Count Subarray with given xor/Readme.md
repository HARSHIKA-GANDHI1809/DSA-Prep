# Count Subarray with given Xor
## Problem:-
    Given an array of integers nums and an integer k, return the total number of subarrays whose XOR equals to k.
## Example:-
    Input : nums = [4, 2, 2, 6, 4], k = 6
    Output : 4
## Approach:-
    xr: Running prefix XOR, initially set to 0.
    mpp: Hash map (unordered_map) storing the frequency of prefix XOR values encountered so far.
    count: Tracks the total number of valid subarrays found, initially set to 0.
    xr: Running prefix XOR, initially set to $0$.mpp: Hash map (unordered_map) storing the frequency of prefix XOR values encountered so far.count: Tracks the total number of valid subarrays found, initially set to 0.
    Compute current prefix XOR: xr = xr ^ nums[i].
    Calculate required prefix XOR: x = xr ^ k.
    Add mpp[x] to count. 
    If x exists in the map, its frequency represents how many valid starting points form a subarray with XOR k ending at current index i.
    Increment the frequency of the current prefix XOR: mpp[xr]++.
    Return count.
## Complexity:-
   Time complexity:- O(N)
   Space Complexity:-O(1)/O(N){worst case}
    
