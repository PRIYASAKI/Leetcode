class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rect) {
        unordered_map<double,int>m;
        long long pc=0;
        for(auto i:rect)
        {
            double ratio=(double)i[0]/i[1];
            pc=pc+m[ratio];
            m[ratio]=m[ratio]+1;
        }
    return pc;
        
    }
};