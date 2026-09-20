class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        a = 0
        b = 0
        i = 0
        while i < len(s):
            a += ord(s[i])
            b += ord(t[i])
            i += 1
        b += ord(t[i])
        return chr(b - a)