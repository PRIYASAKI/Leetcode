class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto a=unique(nums.begin(),nums.end());
        nums.erase(a,nums.end());
        return nums.size();
        
    }
};