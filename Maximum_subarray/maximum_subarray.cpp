class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int sum=0,m=nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
           m=max(sum,m);
            
            if(sum<0) sum=0;
        }
        return m;

        
        
        
        
        // int lm=nums[0];int gm=nums[0];
        // for(int i=1;i<nuams.size();i++)
        // {
        //     lm=max(nums[i]+lm,nums[i]);
        //     gm=max(gm,lm);
        // }
        // return gm;
        
        
        
    }
};