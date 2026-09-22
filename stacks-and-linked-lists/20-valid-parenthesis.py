class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if i in "({[":
                stack.append(i)
            else:
                try:
                    x = stack.pop()
                    if x == "(" and i == ")":
                        pass
                    elif x == "[" and i == "]":
                        pass
                    elif x == "{" and i == "}":
                        pass
                    else:
                        return False
                except:
                    return False
        return not stack