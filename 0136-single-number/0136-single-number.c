int singleNumber(int* a, int n) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j]) 
              c++;
        }
        if(c==1)
          return a[i];
    }
    return 0;
    
}