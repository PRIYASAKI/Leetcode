class Solution {
    public int calculate(String s) {
        if(s.length()==0 || s==null) return 0;
        int curNum=0,res=0;
        Stack<Integer> st = new Stack<>();
        char op='+';
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char curChar=s.charAt(i);
            if(Character.isDigit(curChar))
            {
                curNum=curNum*10 + (curChar-'0');
            }
            if(!Character.isDigit(curChar) && !Character.isWhitespace(curChar) || i==s.length()-1)
            {
               if(op=='+')
                 st.push(curNum);
               else if(op=='-')
                 st.push(-curNum);
               else if(op=='*')
                 st.push(st.pop()*curNum);
               else if(op=='/')
                 st.push(st.pop()/curNum);
               op=curChar;
               curNum=0;
            }
            
        }
        res=0;
        while(!st.isEmpty())
        {
            res+=st.pop();
        }
        return res;
    }
}