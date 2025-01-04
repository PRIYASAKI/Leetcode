class Solution {
public:
    int maxArea(vector<vector<int>>&grid,int r,int c)
    {
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size()||grid[r][c]==0)
                 return 0;
        grid[r][c]=0;
        return 1+maxArea(grid,r+1,c)+maxArea(grid,r-1,c)+maxArea(grid,r,c+1)+maxArea(grid,r,c-1);
                  
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int max=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    max=fmax(max,maxArea(grid,i,j));
                }
            }
        }
       return max; 
    }
};