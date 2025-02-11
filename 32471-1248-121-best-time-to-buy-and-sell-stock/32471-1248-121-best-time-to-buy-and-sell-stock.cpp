class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPri=INT_MAX,maxProf=0,curProf=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            minPri=fmin(minPri,prices[i]);
            curProf=prices[i]-minPri;
            maxProf=fmax(maxProf,curProf);
           
        }
        return maxProf;
        
    }
};