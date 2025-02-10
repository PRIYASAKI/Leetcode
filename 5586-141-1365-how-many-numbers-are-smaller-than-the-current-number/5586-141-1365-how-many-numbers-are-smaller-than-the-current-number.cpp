class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            v1.push_back(nums[i]);
            
        }
        
        for(int i=0;i<n;i++)
        {
            int c=0;
            int max=v1[i];
            for(int j=0;j<n;j++)
            {
                if(v1[i]>v1[j])
                {
                    c++;
                }
                
            }
            v2.push_back(c);
        }
     return v2;
        
    }
};