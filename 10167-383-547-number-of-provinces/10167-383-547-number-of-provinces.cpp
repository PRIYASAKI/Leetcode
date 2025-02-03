class Solution {
public:
    void dfs(int node,int n,vector<bool> &vis,vector<vector<int>>& isConnected)
    {
        vis[node]=true;
        for(int j=0;j<n;j++)
        {
            if(isConnected[node][j]==1 && !vis[j])
            {
                dfs(j,n,vis,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int province=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                province++;
                dfs(i,n,vis,isConnected);
            }
        }
       return province; 
    }

};