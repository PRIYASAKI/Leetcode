class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        fun(n,ans,0,0,"");
        return ans;
        
    }
    void fun(int n,vector<string>&ans,int open,int close,string cur_str)
    {
        if(cur_str.size()==2*n)
        {
            ans.push_back(cur_str);
            return;
        }

        if(open<n) fun(n,ans,open+1,close,cur_str+"(");
        if(close<open) fun(n,ans,open,close+1,cur_str+")");
    }
};