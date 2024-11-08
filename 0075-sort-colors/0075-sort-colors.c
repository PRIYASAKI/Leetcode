
void sortColors(int* a, int ns) {
    //int *a=(int *)malloc(sizeof(int)*ns);
    for(int i=0;i<ns;i++)
    {
        for(int j=i+1;j<ns;j++)
        {
            if(a[i]>a[j])
            {
               int t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
}