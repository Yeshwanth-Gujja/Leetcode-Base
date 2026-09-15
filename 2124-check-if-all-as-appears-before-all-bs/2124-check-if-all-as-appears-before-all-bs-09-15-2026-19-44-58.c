bool checkString(char* s) {
    int i = 0;
    while(s[i]!='\0'){
        if (s[i] == 'b' && s[i + 1] == 'a'){
            return false;
        }
        i++;
    }
    return true;
}