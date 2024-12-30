class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ma=nums1;
        ma.insert(ma.end(),nums2.begin(),nums2.end());
        sort(ma.begin(),ma.end());
        int n=ma.size();
        if(n%2!=0)
        {
            return ma[n/2];
        }
        else 
        {
            return (ma[n/2-1]+ma[n/2])/2.0;
        }
        
    }
};