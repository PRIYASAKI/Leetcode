class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pc=0;
        unordered_map<int,int> m;
        for(auto ele : nums)
        {
            pc=pc+m[ele];
            m[ele]=m[ele]+1;
        }
        return pc;
        
    }
};