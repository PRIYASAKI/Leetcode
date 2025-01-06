class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        int left=0,right=c-1;
        int top=0,bottom=r-1;
        vector<int>res;

    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            res.push_back(m[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            res.push_back(m[i][right]);
        }
        right--;

        if(top<=bottom)
        {
        for(int i=right;i>=left;i--)
        {
            res.push_back(m[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            res.push_back(m[i][left]);
        }
        left++;
        }
    }
    return res;
    }
};