/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode bin(int[] nums,int s,int e)
    {
        if(s>e)
             return null;
        int mid=s+(e-s)/2;
        TreeNode node=new TreeNode(nums[mid]);
        node.left=bin(nums,s,mid-1);
        node.right=bin(nums,mid+1,e);
        return node;
    }
    public TreeNode sortedArrayToBST(int[] nums) {
        int n=nums.length;
        if(n==0) 
            return null;
        return bin(nums,0,n-1);
    }
}