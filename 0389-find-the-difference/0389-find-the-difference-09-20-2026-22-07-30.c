char findTheDifference(char* s, char* t) {
    int a = 0;
    int b = 0;
    int i = 0;
    while(t[i]!='\0')
    {
        a += s[i];
        b += t[i];
        i++;
    }
    return b-a;

}