class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int r=n-1;
        int t=0;
        int b=n-1;
        int l=0;
        int res=1;
        while(r>=l && t<=b)
        {
            for(int i=l;i<=r;i++)
            {
                ans[t][i]=res++;
            }
            t++;

            for(int i=t;i<=b;i++)
            {
                ans[i][r]=res++;
            }
            r--;

            if(t<=b)
            {
                for(int i=r;i>=l;i--)
                {
                    ans[b][i]=res++;
                }
                b--;
            }

            if(l<=r)
            {
                for(int i=b;i>=t;i--)
                {
                    ans[i][l]=res++;
                }
                l++;
            }

        }
        return ans;
        
    }
};