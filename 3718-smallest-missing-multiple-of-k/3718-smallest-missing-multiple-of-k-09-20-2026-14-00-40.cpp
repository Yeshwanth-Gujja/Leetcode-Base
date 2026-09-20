class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int seen[101] = {0};
        for (int i = 0; i < nums.size(); i++){
            seen[nums[i]] = 1;
        }
        for (int i = k; i <= 100; i += k){
            if (!seen[i]){
                return i;
            }
        }
        return ((100 / k) + 1) * k;
    }
};