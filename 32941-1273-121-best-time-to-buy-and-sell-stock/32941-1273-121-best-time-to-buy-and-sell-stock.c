int maxProfit(int* pri, int ps) {
    int cp=0,maxp=0,minp=INT_MAX;
    for(int i=0;i<ps;i++)
    {
        minp=fmin(minp,pri[i]);
        cp=pri[i]-minp;
        maxp=fmax(maxp,cp);

    }
    return maxp;
}