class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int org = n;
        while (n>0){
            sum = sum+(n%10);
            pro = pro*(n%10);
            n = n/10;
        } return (org%(sum+pro)==0);
    }
};