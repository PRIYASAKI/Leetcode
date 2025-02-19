class Solution {
public:
    int LCS(int i,int j,vector<int>& t1,vector<int>& t2,int n1,int n2,vector<vector<int>>&dp)
    {
        if(i>=n1 || j>=n2) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(t1[i]==t2[j]) return 1+LCS(i+1,j+1,t1,t2,n1,n2,dp);
        return dp[i][j]=max(LCS(i+1,j,t1,t2,n1,n2,dp),LCS(i,j+1,t1,t2,n1,n2,dp));
    }
    int maxUncrossedLines(vector<int>& t1, vector<int>& t2) {
        int n1=t1.size();
        int n2=t2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return LCS(0,0,t1,t2,n1,n2,dp);
        
    }
};