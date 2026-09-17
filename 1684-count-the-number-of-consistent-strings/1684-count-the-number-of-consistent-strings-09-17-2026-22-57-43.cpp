class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedLetters[26] = {};

        for (char letter : allowed)
            allowedLetters[letter - 'a'] = true;

        int count = 0;

        for (string& word : words) {
            bool consistent = true;

            for (char letter : word) {
                if (!allowedLetters[letter - 'a']) {
                    consistent = false;
                    break;
                }
            }

            if (consistent)
                count++;
        }

        return count;
    }
};