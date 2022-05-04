class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high){
        
        int count=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && (long) nums[i] > (long) 2 * nums[j]){  
                j++;
            }
            count+= (j-(mid+1));
        }
        
        int left=low;
        int right=mid+1;
        vector<int> temp;
        
        while(left<=mid && right<=high) {
            if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
        }
        
        while(left<=mid) temp.push_back(nums[left++]);
        while(right<=high) temp.push_back(nums[right++]);
        for(int i=low;i<=high;i++) nums[i]=temp[i-low];
        return count;
    }
    
    int mergefunc(vector<int>& nums,int low,int high){
        
         if(low>=high) return 0;
         int mid=(low+high)/2;
         int inv=mergefunc(nums,low,mid);
         inv+=mergefunc(nums,mid+1,high);
         inv+=merge(nums,low,mid,high); 
         return inv;
    }
    
    int reversePairs(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        return mergefunc(nums,low,high);
    }
};