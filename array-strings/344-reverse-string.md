# Problem: Reverse String (Easy)
[Link](https://leetcode.com/problems/reverse-string/)

## Approach
Since the string is given as an array, it can be reversed in-place simply by
swapping its elements. Swapping of the elements can be achieved by the use of
two pointers, one at the left of the array, moving right, and one at the right
moving left. These simply swap their contents until the meet in the middle, at
which point the array has been fully swapped.

## Complexity
- Time: $O(n)$
- Space: $O(1)$