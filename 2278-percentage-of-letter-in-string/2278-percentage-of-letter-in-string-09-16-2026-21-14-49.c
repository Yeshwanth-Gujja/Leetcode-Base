int percentageLetter(char* s, char letter) {
    int count = 0;
    int i = 0;
    while(s[i] !='\0'){
        if(s[i]==letter){
            count++;
        }
        i++;
    }
    return (count * 100) / strlen(s);
}