/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int ns, int target, int* rs) {
    *rs=2;
    int *res=(int *)malloc(sizeof(int)*2);
    for(int i=0;i<ns;i++)
    {
        for(int j=i+1;j<ns;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                res[0]=i;
                res[1]=j;
            }
        }
    }
    return res;
    
}