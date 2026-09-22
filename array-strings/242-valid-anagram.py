class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d = {}

        if len(s) != len(t):
            return False

        for i in s:
            try:
                d[i] += 1
            except:
                d[i] = 1

        for i in t:
            try:
                d[i] -= 1
            except:
                return False

        for k, v in d.items():
            if v != 0:
                return False

        return True

# Tests
# s: "anagram", t: "nagaram" => True
# s: "racecar", t: "racecar" => True