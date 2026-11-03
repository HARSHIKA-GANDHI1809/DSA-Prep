# Min Depth of Binary Tree:-
## Problem:-
  Given a binary tree, find its minimum depth.
  The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
# Example :-
  Input: root = [3,9,20,null,null,15,7]
  Output: 2
## Approach:-
   Leaf Node Check: A leaf node is defined as a node with no children (both left and right pointers are nullptr).
   Edge Cases: If a node has only one child, you cannot just take min(0, depth) because a nullptr child does not count as a valid leaf node path.
   You must explicitly skip the nullptr branch and recurse down the non-empty side.
## Complexity: 
   Time complexity:-O(N)
   Space complexity:-O(H)
