bool isPalindrome(int x) {
    long int r=0,s=0;
    long int n=x;
    while(x>0)
    {
        r=x%10;
        s=s*10+r;
        x/=10;
    }
    if(n==s)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}