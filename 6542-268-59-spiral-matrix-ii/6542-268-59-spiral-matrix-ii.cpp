class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1;
        int top=0,bottom=n-1;
        vector<vector<int>>res(n,vector<int>(n));
        int val=1;
    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            res[top][i]=val++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            res[i][right]=val++;
        }
        right--;

        if(top<=bottom)
        {
        for(int i=right;i>=left;i--)
        {
            res[bottom][i]=val++;
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            res[i][left]=val++;
        }
        left++;
        }
    }
    return res;

        
    }
};