void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;

}
void moveZeroes(int* a, int n) {
    int nzi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(&a[nzi++],&a[i]);
        }
    }                                                                                                                                                                                               }