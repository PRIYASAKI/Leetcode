/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int ns1, int* nums2, int ns2, int* rs) {
    int *res=(int *)malloc(sizeof(int)*ns1);
    int found=0;
    for(int i=0;i<ns1;i++)
    {
        res[i]=-1;
        found=0;
        for(int j=0;j<ns2;j++)
        {
            if(nums1[i]==nums2[j]) found=1;
            if(found && nums2[j]>nums1[i]) 
            {
                res[i]=nums2[j];
                break;
            }
        }
    }
    *rs=ns1;
    return res;

    
}