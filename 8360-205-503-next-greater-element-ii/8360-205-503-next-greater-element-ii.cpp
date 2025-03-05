class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>s;
        vector<int>res(n,-1);
        for(int i=0;i<n*2-1;i++)
        {
            while(!s.empty() && nums[s.top()]<nums[i%n])
            {
                res[s.top()]=nums[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        return res;
    }
};