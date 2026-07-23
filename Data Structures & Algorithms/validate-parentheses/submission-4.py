class Solution:
    def isValid(self, s: str) -> bool:
        n = []
        print(  len(n))
        print('efwew')
        if len(s) <= 1:
                return False
        for i in range(len(s)):
            print(1)
            if  s[i] == '{':
                n.append(s[i])
            elif  s[i] == '(':
                n.append(s[i])
            elif  s[i] == '[':
                print(2)
                n.append(s[i])
            elif  s[i] == ')':
                if len(n) == 0 or n.pop() != '(':
                    return False
            elif  s[i] == '}':
                if len(n) == 0 or n.pop() != '{':
                    return False
            elif  s[i] == ']':
                print(3)
                if len(n) == 0 or n.pop() != '[':
                    return False
        if (len(n) != 0):
            return False
        return True
