class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, nos=0;
        for(int i = 0; i<nums.size() ; i++)
        {
            if(nums[i]>0) {
                pos++;
            }
            else if(nums[i]<0){
                nos++;
            }
        }
        return pos>=nos?pos:nos;
    }
};