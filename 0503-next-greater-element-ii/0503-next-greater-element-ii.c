/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int ns, int* rs) {
    int *res=(int *)malloc(sizeof(int)*ns);
    for(int i=0;i<ns;i++)
    { 
        res[i]=-1;
        for(int j=1;j<ns;j++)
        {
          if(nums[i]<nums[(i+j)%ns])
          {
            res[i]=nums[(i+j)%ns];
            break;
          }
          
        }
    }
    *rs=ns;
    return res;
}