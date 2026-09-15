class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0, x = 0;
        int n = nums.size();
        for(int i=0; i<n ; i++)
        {
            x = nums[i];
            if(9<x && x<100 || 999<x && x<10000 || x==100000){
                res++;
            }
        }
        return res;
    }
};