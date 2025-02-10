class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>set1(nums.begin(),nums.end());
        vector<int>v1;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            if(!set1.count(i)) {
                v1.push_back(i);
            }
        }

        return v1;
    }
};