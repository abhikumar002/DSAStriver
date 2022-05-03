class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int digit1=-1,digit2=-1,count1=0,count2=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==digit1) count1++;
            else if(nums[i]==digit2) count2++;
            else if(count1==0) { digit1=nums[i]; count1=1; }
            else if(count2==0) { digit2=nums[i]; count2=1; }
            else { count1--; count2--; }
        }
        
        vector<int> ans;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(digit1==nums[i]) cnt1++;
            else if(digit2==nums[i]) cnt2++;
        }
        
        if(cnt1 > n/3) ans.push_back(digit1);
        if(cnt2 > n/3) ans.push_back(digit2);
        
        
        return ans;
    }
};