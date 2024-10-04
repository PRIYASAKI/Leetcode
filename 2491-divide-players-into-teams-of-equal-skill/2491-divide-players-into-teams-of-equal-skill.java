class Solution {
    public long dividePlayers(int[] skill) {
        int n=skill.length;
        Arrays.sort(skill);
        int t=skill[0]+skill[n-1];
        long length=0;
        for(int i=0;i<n/2;i++)
        {
            if(skill[i]+skill[n-i-1] !=t)
            {
                return -1;
            }
            length+=skill[i]*skill[n-i-1];
        }
        return length;
        
     }
}