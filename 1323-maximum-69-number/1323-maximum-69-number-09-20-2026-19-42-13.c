int maximum69Number (int num) {
    char str[5];
    sprintf(str, "%d", num);
    int i = 0;
    while(str[i] != '\0'){
        if(str[i]=='6'){
            str[i] = '9';
            break;
        }
        i++;
    }
    return atoi(str);
}