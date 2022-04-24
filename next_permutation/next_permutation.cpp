class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
 
        int n=nums.size();
        int i=0,l=0;
        for(i=n-2;i>=0;i--)
        { if(nums[i]<nums[i+1]) 
             break;
        }

        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l=n-1;l>i;l--){
                if(nums[l]>nums[i])
                    break;
            }
            swap(nums[l],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
        
    
        // next_permutation(nums.begin(),nums.end());
    
    
    }
};