class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        if(nums.size()==0) return ans;
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
       
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target2=target-nums[i]-nums[j];
                int left=j+1,right=n-1;
                
                while(left < right){
                    int twosum=nums[left]+nums[right];
                    if(twosum<target2)
                        left++;
                    else if(twosum>target2) right--;
                    else{
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[left];
                        temp[3]=nums[right];
                        ans.push_back(temp);
                        
                        
                        while(left<right && nums[left]==temp[2]) ++left;
                        while(left<right && nums[right]==temp[3]) --right;
                    }
                    
                }
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        
        return ans;
    }
};