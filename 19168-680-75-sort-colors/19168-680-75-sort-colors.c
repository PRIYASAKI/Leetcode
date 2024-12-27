void sortColors(int* a, int ns) {
    int zerocount=0,onescount=0;
    for(int i=0;i<ns;i++)
    {
        if(a[i]==0) ++zerocount;
        if(a[i]==1) ++onescount;
    }
    for(int i=0;i<zerocount;i++) a[i]=0;
    for(int i=zerocount;i<zerocount+onescount;i++) a[i]=1;
    for(int i=zerocount+onescount;i<ns;i++) a[i]=2;
}