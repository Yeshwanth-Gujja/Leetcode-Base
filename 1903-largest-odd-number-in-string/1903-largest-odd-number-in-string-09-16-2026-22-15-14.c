char* largestOddNumber(char* num) {
    int i = strlen(num)-1;
    while(i>=0 && (num[i] == '0' || num[i] == '2' || num[i] == '4' || num[i] == '6' ||num[i] == '8')){
        i--;
    }
    num[i+1] = '\0';
    return num;
}