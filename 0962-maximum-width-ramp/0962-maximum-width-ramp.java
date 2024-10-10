class Solution {
    public int maxWidthRamp(int[] nums) {
        int n=nums.length;
        Stack<Integer> stack=new Stack<>();
        for(int i=0;i<n;i++)
        {
            if(stack.isEmpty() || nums[i]<nums[stack.peek()])
            {
                stack.push(i);
            }
        }
        int maxwidth=0;
        for(int j=n-1;j>=0;j--)
        {
            while(!stack.isEmpty() && nums[stack.peek()]<=nums[j])
            {
                maxwidth=Math.max(maxwidth,j-stack.pop());
            }
        }
        return maxwidth;
    }
}