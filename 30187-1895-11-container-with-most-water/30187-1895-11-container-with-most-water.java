class Solution {
    public int maxArea(int[] h) {
        int l=0,r=h.length-1,max=-1;
        while(l<r)
        {
            int w=r-l;
            int hi=Math.min(h[l],h[r]);
            max=Math.max(max,w*hi);
            if(h[l]<h[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

       return max; 
    }
}