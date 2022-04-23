class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int currprice=INT_MAX; int profit=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<currprice) currprice=nums[i];
            else if(nums[i]-currprice>profit) profit=nums[i]-currprice;
        }
        return profit;
    }
};