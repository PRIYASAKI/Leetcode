class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1e9;
        while(l<r)
        {
          int mid=(l+r)/2;
          int totalHr=0;
          for(auto pile:piles)
          {
            totalHr+=(pile/mid)+(pile%mid!=0);
            if(totalHr>h) break;
          }
          if(totalHr<=h) r=mid;
          else l=mid+1;
        }
        return l;
    }
};