class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       vector<int>v;
       int i=0,j=0;

       while(i<nums1.size() && j<nums2.size())
       {
           if(nums1[i]>nums2[j])
           {
               v.push_back(nums2[j]);
                j++;
           }
           else
           {
               v.push_back(nums1[i]);
               i++;
           }
       }
       while(i<nums1.size())
       {
            v.push_back(nums1[i]);
               i++;
       }
       while(j<nums2.size())
           {
               v.push_back(nums2[j]);
                j++;
           }
        
        int n=v.size();
        if(n%2!=0)
        return v[n/2];
        return (v[n/2]+v[n/2-1])/2.0;
    }
};
