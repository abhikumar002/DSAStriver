class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int k=0, j=n-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
             {
                swap(nums[i],nums[k]);
                k++;
             }
            else if(nums[i]==2 and j>i)
            {
                swap(nums[i],nums[j]);
                j--; i--;
            }
        }
        
        
    }
};