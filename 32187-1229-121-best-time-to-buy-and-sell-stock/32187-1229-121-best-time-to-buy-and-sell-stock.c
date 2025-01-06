int maxProfit(int* prices, int ps) {
    int minPrice=INT_MAX,maxProf=0,currProf=0;
    for(int i=0;i<ps;i++)
    {
        minPrice=fmin(minPrice,prices[i]);
        currProf=prices[i]-minPrice;
        maxProf=fmax(maxProf,currProf);
    }
    return maxProf;
}