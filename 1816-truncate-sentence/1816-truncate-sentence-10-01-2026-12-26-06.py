class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        truncate_words = s.split(" ")
        return " ".join(truncate_words[:k])