class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int hash[101] = {0};
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (int i = 0; i < 101; i++){
            count += ((hash[i]) * (hash[i] - 1))/2;
        }
        return count;
    }
};