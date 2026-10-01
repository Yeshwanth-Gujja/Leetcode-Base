char* largestEven(char* s) {
    for(int i=strlen(s)-1; i>=0; i--){
        if(s[i]!='1'){
            s[i+1] = '\0';
            return s;
        }
    }
    return "";
}