class Solution:
    def restoreString(self, s: str, indices: list[int]) -> str:
        res = [''] * len(s)
        for index, char in enumerate(s):
            res[indices[index]] = char
        return "".join(res)