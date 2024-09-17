class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        HashSet<String> set=new HashSet<String>();
        HashSet<String> dupset=new HashSet<String>();
        String r1[]=s1.split(" ");
        String r2[]=s2.split(" ");
        for(String r : r1)
        {
            if(!dupset.contains(r))
            {
                if(set.contains(r))
                {
                    set.remove(r);
                    dupset.add(r);
                }
            
                 else
                {
                 set.add(r);
                }
            }
        }
        for(String r : r2)
        {
            if(!dupset.contains(r))
            {
                if(set.contains(r))
                {
                    set.remove(r);
                    dupset.add(r);
                }
            
                else
               {
                set.add(r);
               }
            }
        }
        String result[]=new String[set.size()];
        int i=0;
        for(String res : set)
        {
            result[i++]=res;
        }
        return result;
        
    }
}