class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
         if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2,nums1);
         int n=nums1.size(); int m=nums2.size();
        
         int low=0; int high=n;
         while(low<=high){
             int it1=(low+high)/2;
             int it2=(m+n+1)/2-it1;
             
             int l1= it1==0 ? INT_MIN : nums1[it1-1];
             int l2= it2==0 ? INT_MIN : nums2[it2-1];
             int r1= it1==n ? INT_MAX : nums1[it1];
             int r2= it2==m ? INT_MAX : nums2[it2];
             
             if(l1<=r2 && l2<=r1) {
                 if((m+n)%2==0) return (max(l1,l2)+min(r1,r2))/2.0;
                 else return (max(l1,l2));
             }
             
             else if(l1>r2) high=it1-1;
             else low=it1+1;
         }
        
        return 0.0;
    }
};