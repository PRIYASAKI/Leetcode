class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>m;
        for(auto i:nums2)
        {
            while(!s.empty()&&i>s.top())
            {
                m[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            m[s.top()]=-1;
            s.pop();
        }
        vector<int>res;
        for(auto i:nums1)
        {
            res.push_back(m[i]);
        }
      return res;  
    }
};