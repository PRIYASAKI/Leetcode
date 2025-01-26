class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++)
            {
                v[j]=ans[i-1][j] +ans[i-1][j-1];
            }
            ans.push_back(v);
        }

        return ans;
    }
};