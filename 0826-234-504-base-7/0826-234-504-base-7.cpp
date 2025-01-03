class Solution {
public:
    string convertToBase7(int nums) {
        string res;
        if(nums==0) return "0";
        bool isNegative=(nums<0);
        nums=abs(nums);
        while(nums>0)
        {
            res=to_string(nums%7)+res;
            nums/=7;
        }
        return (isNegative)?'-'+res : res;
    }
};