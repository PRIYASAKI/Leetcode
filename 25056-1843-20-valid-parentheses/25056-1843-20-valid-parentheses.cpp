class Solution {
public:
    bool isValid(string st) {
        stack<int>s;
        int c=0;
        for(char ch:st)
        {
            if(ch=='(' || ch=='[' || ch=='{')
            {
            s.push(ch);
            }
            else 
            {
                if(s.empty()) return false;
                if((ch==')' && s.top()!='(') || (ch==']' && s.top()!='[') ||(ch=='}' && s.top()!='{')) return false;
                s.pop();
            }
        }
    return s.empty();
        
    }
};