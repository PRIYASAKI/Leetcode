void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void moveZeroes(int* nums, int ns) {
    int nzi=0;
    for(int i=0;i<ns;i++)
    {
        if(nums[i]!=0)
        {
            swap(&nums[nzi++],&nums[i]);
        }

    }
    
}