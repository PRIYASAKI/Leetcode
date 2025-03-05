int maxProfit(int* pri, int ps) {
    int maxProf=0,curProf=0,minPrice=INT_MAX;
    for(int i=0;i<ps;i++)
    {
        minPrice=fmin(minPrice,pri[i]);//finds minimum 1
        curProf=pri[i]-minPrice;//checking minimum with all 5-1,6-1
        maxProf=fmax(maxProf,curProf);//finding maximum difference

    }
    return maxProf;
    
}