class Solution {
public:
    char findTheDifference(string s, string t) {
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
};