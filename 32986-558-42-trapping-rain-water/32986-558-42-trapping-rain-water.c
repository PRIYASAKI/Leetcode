int trap(int* h, int n) {
    int l=0,r=n-1,lm=0,rm=0,res=0;
    while(l<r)
    {
        if(h[l]<h[r])
        {
            if(lm<h[l])
                lm=h[l];
            res+=lm-h[l];
            ++l;
        }
        else
        {
            if(rm<h[r])
               rm=h[r];
            res+=rm-h[r];
            --r;
               
        }
    }
    return res;
    
}