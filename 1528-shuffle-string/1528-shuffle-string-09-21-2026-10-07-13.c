char* restoreString(char* s, int* indices, int sSize) {
    char* res = malloc((sSize + 1) * sizeof(char));
    for (int i = 0; i < sSize; i++) {
        res[indices[i]] = s[i];
    }
    res[sSize] = '\0';
    return res;
}