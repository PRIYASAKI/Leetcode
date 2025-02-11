class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>v1;
        for(int i=0;i<n1;i++)
        {
            v1.push_back(nums1[i]);
           // printf("%d ",v1[i]);
        }
        for(int i=0;i<n2;i++)
        {
            v1.push_back(nums2[i]);
        }
        sort(v1.begin(),v1.end());
        int n4=v1.size();
        double mid=0;
        if(n4%2!=0)
        {
           mid=v1[n4/2.0];
           return mid;
        }
        else 
        {
            mid=(((v1[n4/2-1]))+v1[(n4/2)])/2.0;
            return mid;
        }
        return 0.0;
    }
};