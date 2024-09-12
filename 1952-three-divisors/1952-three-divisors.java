class Solution {
    public boolean isThree(int n) {
        int sqr=(int)Math.sqrt(n);
        if(n==1) return false;
        if(sqr*sqr==n)
        {
            for(int i=2;i<(int)Math.sqrt(n);i++)
            {
                if(n%i==0)
                  return false;
            }
             return true;
            
        }
        return false;
       
    }
    
}

        
    
