void rotate(int* a, int n, int k) {
   k=k%n;
   int temp[n];
   for(int i=0;i<n-k;i++) temp[i+k]=a[i];
   for(int i=n-k,j=0;i<n;i++,j++) temp[j]=a[i];
   for(int i=0;i<n;i++) a[i]=temp[i];
    
}