class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxi=0;
        for(auto x: nums){
            if(x!=1) count=0;
            else{
                count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};