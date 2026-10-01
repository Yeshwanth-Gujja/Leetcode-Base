class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int c = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                c++;
            }
            if(c==k)
            {
                s.resize(i);
                return s;
            }
        }
        return s;
    }
};