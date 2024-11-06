class Solution {
    public boolean canSortArray(int[] nums) {
        int prevMax=Integer.MIN_VALUE;
        int curMax=nums[0];
        int curMin=nums[0];
        int curbit=Integer.bitCount(nums[0]);
        for(int i=0;i<nums.length;i++)
        {
            if(curbit==Integer.bitCount(nums[i]))
            {
                curMax=Math.max(curMax,nums[i]);
                curMin=Math.min(curMin,nums[i]);
            }
            else
            {
                if(curMin < prevMax)
                  return false;
                prevMax=curMax;
                curbit=Integer.bitCount(nums[i]);
                curMax=nums[i];
                curMin=nums[i];
            }
        }
        return curMin>prevMax;
        
    }
}