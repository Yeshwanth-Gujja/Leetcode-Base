char* truncateSentence(char* s, int k) 
{
    int c = 0;
    for(int i = 0; i<strlen(s); i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
        if(c==k)
        {
            s[i]='\0';
            return s;
        }
    }
    return s;
}