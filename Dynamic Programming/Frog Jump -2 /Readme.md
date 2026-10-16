# Frog Jump-2
## Problem:-
 A frog is crossing a river. The river is divided into some number of units, and at each unit, there may or may not exist a stone. The frog can jump on a stone, but it must not jump into the water.
 Given a list of stones positions (in units) in sorted ascending order, determine if the frog can cross the river by landing on the last stone. Initially, the frog is on the first stone and assumes the first jump must be 1 unit.
  If the frog's last jump was k units, its next jump must be either k - 1, k, or k + 1 units. The frog can only jump in the forward direction.
## Example:-
  Input: stones = [0,1,3,5,6,8,12,17]
  Output: true
## Approach:-
  Initialize:
    If the second stone stones[1] is not 1, return false immediately (since the first jump must always be 1 unit).
    Put 0 into the jump set of the starting stone stones[0] (representing a base/starting state).
  Iterate Through Stones:
    Loop through each stone in your stones array.
    For each jump size k currently stored in that stone's set:
      Try making the three allowed next jumps: k - 1, k, and k + 1 (keeping only jumps > 0).
      Calculate the landing position: nextPos = currentStone + nextJump. 
  Propagate the State:
     Check if nextPos exists in your stones map (dp.count(nextPos)).
     If it exists, add the nextJump size to that destination stone's set.   
  Final Check:
     At the end, check if the set at the last stone (stones.back()) is empty or not.
     If it has at least one valid incoming jump size, the frog successfully crossed, so return true;
     otherwise, return false  .
## Complexity:-
  Time Complexity:-O(N^2)
  Space Complexity:-O(N^2)
     
