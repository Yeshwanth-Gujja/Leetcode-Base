class Solution {
public:
    int maximum69Number (int num) {
        std::string str = std::to_string(num);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '6') {
                str[i] = '9';
                break; 
            } 
        }        
        return std::stoi(str);
    }
};