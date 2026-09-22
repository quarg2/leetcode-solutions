# Problem: Valid Parenthesis
[Link](https://leetcode.com/problems/valid-parentheses/)

## Approach
Since the inner most parenthesis must be closed first, a stack is the right
data structure to solve this. Every time an opening set is encountered, it is
pushed on to a stack and then when a closing set is encountered, the stack is
popped. If it is the correct type, then it proceeds, else it returns False.

## Complexity
- Time: $O(n)$
- Space: $O(n)$