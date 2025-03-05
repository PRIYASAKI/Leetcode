int maxSubArray(int* nums, int ns) {
    int maxsum=nums[0],cursum=0;
    for(int i=0;i<ns;i++)
    {
        if(cursum<0) cursum=0;
        cursum=cursum+nums[i];
        if(maxsum<cursum) 
        {
            maxsum=cursum;
        }
    }
    return maxsum;

}