int maxProfit(int* prices, int ps) {
    int minPrice=INT_MAX,maxProfit=0,currProf=0;
    for(int i=0;i<ps;i++)
    {
        minPrice=fmin(minPrice,prices[i]);
        currProf=prices[i]-minPrice;
        maxProfit=fmax(currProf,maxProfit);
    }
    return maxProfit;
    
}