int maxSubArray(int* nums, int n) {
    int maxsum=nums[0],cursum=nums[0];
    for(int i=1;i<n;i++)
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