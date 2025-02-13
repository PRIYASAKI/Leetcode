class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>ans;
        int max=0;
        int start=0,end=0;
        while(start<s.size())
        {
            auto it=ans.find(s[start]);
            if(it==ans.end())
            {
                if((start-end+1)>max)
                  max=start-end+1;
                ans.insert(s[start]);
                start++;
            }
            else
            {
                ans.erase(s[end]);
                end++;
            }

        }
        return max;
    }
};