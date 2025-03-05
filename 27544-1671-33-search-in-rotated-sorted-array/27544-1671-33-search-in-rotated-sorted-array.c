int search(int* nums, int ns, int tar) {
    for(int i=0;i<ns;i++)
    {
        if(nums[i]==tar)
           return i;
    }
    return -1;
    
}