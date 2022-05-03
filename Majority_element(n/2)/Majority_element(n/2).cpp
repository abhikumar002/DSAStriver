class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
         int count=0;
         int digit=nums[0];
        
         for(int i=0;i<nums.size();i++)
         {
             if(count==0) digit=nums[i];
             if(digit==nums[i]) count++;
             else count--;
             

         }
        return digit;
    }
};