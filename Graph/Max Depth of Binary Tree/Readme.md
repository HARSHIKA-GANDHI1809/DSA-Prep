# Maximum depth of binary tree:-
## Problem:-
   Given the root of a binary tree, return its maximum depth.
   A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
## Example:-
   Input: root = [3,9,20,null,null,15,7]
   Output: 3
## Approach:-
   Emulate recursion using an explicit stack that stores pairs of (TreeNode*, current_depth).
   Steps: 
     Push (root, 1) to the stack.Keep track of a global max_depth.
     While the stack is not empty, pop the top element, update max_depth = max(max_depth, current_depth), and push its left and right children with current_depth + 1.
## Complexity:-
    Time: {O}(N)
    Space: {O}(H)
