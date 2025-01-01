class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int len_a=a.length();
        int len_b=b.length();
        int n=len_b/len_a;
        int cnt=n;

        string na="";
        while(cnt--)
        {
            na=na+a;
        }
        if(na.find(b)!=std::string::npos)
        {
            return n;
        }
        na=na+a;
        if(na.find(b)!=std::string::npos)
        {
            return n+1;
        }
        na=na+a;
        if(na.find(b)!=std::string::npos)
        {
            return n+2;
        }
      return -1;
        
    }
};