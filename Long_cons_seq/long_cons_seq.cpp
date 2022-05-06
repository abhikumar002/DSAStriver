class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> smp;
        for(int x: nums){
            smp.insert(x);
        }
        int maximum=0;
        
        for(int num:nums){
            if(!smp.count(num-1)){
                int currnum=num;
                int currstreak=1;
                
                while(smp.count(currnum+1)){
                    currnum+=1;
                    currstreak+=1;
                }
                
                 maximum=max(maximum,currstreak);
            }           
        }
        return maximum;
        
//         if(nums.size()==0) return 0;
//         sort(nums.begin(),nums.end());
//         int maximum=1;
//         int sum=1,prev=nums[0];
//         for(int i=1;i<nums.size();i++)
//         {
//             if(nums[i]==prev+1){ sum++;}
//             else if(nums[i]!=prev) sum=1;
//             prev=nums[i];
//             maximum=max(maximum,sum);
            
//         }
//         return maximum;
    }
};