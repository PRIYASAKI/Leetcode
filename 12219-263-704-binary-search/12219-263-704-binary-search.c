int search(int* a, int n, int target) {
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==target)
           return mid;
        else if(a[mid]<target)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}