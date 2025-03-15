class Solution {
public:
    void backtrack(int start,vector<vector<int>> &res,vector<int> &curr,int n,int target)
    {
        if(curr.size()==n)
        {
            if(target==0)
            {
                res.push_back(curr);
                return;
            }
            else
                return;
        }
        for(int i=start;i<=9;i++)
        {
            curr.push_back(i);
            backtrack(i+1,res,curr,n,target-i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int n, int t) {
        vector<vector<int>> res;
        vector<int>curr;
        backtrack(1,res,curr,n,t);
        return res;
        
    }
};