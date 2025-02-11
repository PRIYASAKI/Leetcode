class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l=0,r=1;
        int diff=0,maxPro=0;
        while(r<n)
        {
            if(prices[l]<prices[r])
            {
                diff=prices[r]-prices[l];
                maxPro=fmax(maxPro,diff);
            }
            else
            {
                l=r;
            }
            r=r+1;
        }
       return maxPro; 
    }
};