void sortColors(int* nums, int ns) {
    int zc=0,oc=0,tc=0;
    for(int i=0;i<ns;i++)
    {
        if(nums[i]==0) ++zc;
        else if(nums[i]==1) ++oc;
        else if(nums[i]==2) ++tc;
    }
    for(int i=0;i<zc;i++)
    {
        nums[i]=0;
    }
    for(int i=zc;i<zc+oc;i++)
    {
        nums[i]=1;
    }
    for(int i=zc+oc;i<ns;i++)
    {
        nums[i]=2;
    }
    
}