class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>ans;
        int sc=0;
        for(char i : s)
        {
            if(i=='(')
            {
                ans.push(sc);
                sc=0;
            }
            else
            {
                sc=ans.top()+max(2*sc,1);
                ans.pop();
            }
        }
        return sc;
    }
};