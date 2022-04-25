class Solution {
public:
    int findDuplicate(vector<int>& nums) {   
        
        int n=nums.size();
        if(n>1)
        {
            int slow=nums[0];
            int fast=nums[nums[0]];
            
            while(slow!=fast)
            {
                slow=nums[slow];
                fast=nums[nums[fast]];
            }
            fast=0;
            
            while(slow!=fast)
            {
                slow=nums[slow];
                fast=nums[fast];
            }
            
            return slow;
        }
        return -1;
}
        
//      sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==nums[i+1]) return nums[i];
//         }
    
//      unordered_map<int,int> umap;
     
//      for(auto x:nums) umap[x]++;
     
//           for(auto it=umap.begin();it!=umap.end();it++)
//               if(it->second>=2) return it->first;
           
    //     return 0;
    // }
};