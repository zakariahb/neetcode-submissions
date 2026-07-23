class Solution:
    def isValid(self, s: str) -> bool:
        n = []
        for i in range(len(s)):
            if  s[i] == '{' or s[i] == '(' or s[i] == '[':
                n.append(s[i])
            elif  s[i] == ')':
                if len(n) == 0 or n.pop() != '(':
                    return False
            elif  s[i] == '}':
                if len(n) == 0 or n.pop() != '{':
                    return False
            elif  s[i] == ']':
                if len(n) == 0 or n.pop() != '[':
                    return False
        if (len(n) != 0):
            return False
        return True
