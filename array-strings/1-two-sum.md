# Problem: Two Sum (Easy)
[Link](https://leetcode.com/problems/two-sum/)

## Approach
While a brute force approach is possible, it uses a more efficient approach by
storing the numbers inside of a dictionary along side its index. This speeds up
the program as now searches can be performed in constant time, instead of
linear time. However, this does increase the amount of memory used as the
dictionary now needs to be stored.

## Complexity
- Time: $O(n)$
- Space: $O(n)$