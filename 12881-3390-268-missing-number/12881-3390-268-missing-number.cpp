class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int x=(n*(n+1))/2.0;
        for(int i: nums)
        {
           s+=i;
        }
        return x-s;
        
    }
};