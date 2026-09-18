class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int prefsize = pref.length();
        int i = 0;
        while(i<words.size()){
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
};