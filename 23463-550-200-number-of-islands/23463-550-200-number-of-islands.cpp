class Solution {
public:
    int func(vector<vector<char>>& grid,int r,int c)
    {
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size()|| grid[r][c]=='0')
            return 0;
        grid[r][c]='0';
        return 1+func(grid,r,c+1)+func(grid,r+1,c)+func(grid,r-1,c)+func(grid,r,c-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ct=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    func(grid,i,j);
                    ct++;
                }
            }
        }
        return ct;
    }
};