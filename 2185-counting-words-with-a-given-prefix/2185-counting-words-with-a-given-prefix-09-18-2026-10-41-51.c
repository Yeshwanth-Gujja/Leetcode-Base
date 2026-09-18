int prefixCount(char** words, int wordsSize, char* pref) {
    int count = 0;
    int prefsize = strlen(pref);
    int i = 0;
    while(i<wordsSize){
        int j = 0;
        while(j<prefsize){
            if(words[i][j] != pref[j]){
                break;
            }
            j++;
        }
        if(j==prefsize){
            count++;
        }
        i++;
    }
    return count;
}