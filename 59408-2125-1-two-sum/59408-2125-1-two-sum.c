/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int n, int tar, int* rs) {
    *rs=2;
    int *res=(int *)malloc(sizeof(int)*2);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==tar)
            {
                res[0]=i;
                res[1]=j;
            }
        }
    }
    return res;
    
}