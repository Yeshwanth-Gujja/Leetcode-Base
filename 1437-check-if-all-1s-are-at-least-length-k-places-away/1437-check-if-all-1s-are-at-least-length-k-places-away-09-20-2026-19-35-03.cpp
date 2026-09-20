class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k)
    {
        int count = 0;
        int i = 0;
        while(i!=1)
        {
            i++;
        }
        for(i++;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                count++;
            }
            else if (nums[i] == 1 && count >= k)
            {
                count = 0;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};