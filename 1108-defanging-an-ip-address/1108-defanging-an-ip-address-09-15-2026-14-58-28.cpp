class Solution {
public:
    string defangIPaddr(string address) {
        int len = address.size();
        string defang = "";
        for(int i=0; i<len ;i++){
            if(address[i]=='.'){
                defang += "[.]";
            }
            else{
                defang += address[i];
            }
        }
        return defang;
    }
};