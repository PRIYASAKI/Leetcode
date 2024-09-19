class Solution {
    public int maxArea(int[] height) {
        int l=0;
        int r=height.length-1;
        int max=-1;
        while(l<r)
        {
            int w=r-l;
            int h=Math.min(height[l],height[r]);
            max=Math.max(max,h*w);
            if(height[l]<height[r])
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