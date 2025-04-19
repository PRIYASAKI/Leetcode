void rotate(int* a, int ns, int k) {
    k=k%ns;
    int temp[ns];
    for(int i=0;i<ns-k;i++) temp[i+k]=a[i];
    for(int i=ns-k,j=0;i<ns;i++,j++) temp[j]=a[i];
    for(int i=0;i<ns;i++) a[i]=temp[i];
    
}