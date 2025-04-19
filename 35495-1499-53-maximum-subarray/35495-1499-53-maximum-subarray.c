int maxSubArray(int* nums, int ns) {
    int cs=0,max=nums[0];
    for(int i=0;i<ns;i++)
    {
        if(cs<0) cs=0;
        cs=cs+nums[i];
        if(max<cs)
        {
            max=cs;
        }
    }
    return max;
    
}