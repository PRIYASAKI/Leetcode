int minimumSum(int num) {
    int a[4],i=0,r,t,s;
    while(num!=0)
    {
        r=num%10;
        num/=10;
        a[i]=r;
        i++;
    }
    for(int i=0;i<4;i++)
    {
         for(int j=i;j<4;j++)
         {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
         }
    }
    int x=(a[0]*10)+a[2];
    int y=(a[1]*10)+a[3];
    for(int i=0;i<4;i++)
    {
        s=x+y;
    }
    return s;
    
    
}