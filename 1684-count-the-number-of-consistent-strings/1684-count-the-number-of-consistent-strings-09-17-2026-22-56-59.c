int countConsistentStrings(char *allowed, char **words, int wordsSize) {
    int allowedLetters[26] = {0};
    int count = 0;
    for (int i = 0; allowed[i] != '\0'; i++) {
        allowedLetters[allowed[i] - 'a'] = 1;
    }
    for (int i = 0; i < wordsSize; i++) {
        int consistent = 1;
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (!allowedLetters[words[i][j] - 'a']) {
                consistent = 0;
                break;
            }
        }
        if (consistent)
            count++;
    }
    return count;
}