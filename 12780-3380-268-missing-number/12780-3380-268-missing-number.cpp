class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=(n*(n+1))/2.0;
        int s=0;
        for(int a:nums)
        {
            s+=a;
            
        }
        return x-s;
        
    }
};