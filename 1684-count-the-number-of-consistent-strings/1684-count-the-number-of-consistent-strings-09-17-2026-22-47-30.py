class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count = 0
        allow_letter = set(allowed)
        for word in words:
            consistent = True
            for letter in word:
                if letter not in allow_letter:
                    consistent = False
                    break
            if(consistent):
                count += 1
        return count