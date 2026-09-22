# Problem: Two Sum (Easy)
[Link](https://leetcode.com/problems/valid-anagram/)

## Approach
This question is solved by adding elements from the string `s` into a
dictionary with its frequency by iterating through `s`. Then, `t` is iterated
throough and the corresponding letter's frequency from the aforementioned
dictionary is dropped. If ever there is a letter not present in the dictionary
or the frequency goes below zero, then it is an invalid anagram. If the value
of all of the keys at the end of execution is 0, then it is a valid anagram.

## Complexity
- Time: $O(n)$
- Space: $O(n)$