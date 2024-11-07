
int reverse(int n){
    int r,s=0;
    while(n)
    {
        if(s>214748364 || s<(-214748364))
        return 0;
        r=n%10;
        s=s*10+r;
        n/=10;
        
    }
    return s;
    

}