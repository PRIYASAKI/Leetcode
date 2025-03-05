class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size();i++)
        {
            r=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j]) r++;
            }
            if(r==1)
               return nums[i];
        }
            return 0;
    }
};