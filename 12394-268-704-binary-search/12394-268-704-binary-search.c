int search(int* a, int ns, int t) {
    int left=0,right=ns-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==t)
        {
            return mid;
        }
        else if(a[mid]<t)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
    
}