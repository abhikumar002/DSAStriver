class Solution {
public:
    void combine(vector<int>& arr, vector<vector<int>>& ans,vector<int>& ds,int target,int index){
        if(index==arr.size()){ 
            if(target==0) ans.push_back(ds); 
            return; 
       }
        
         if(arr[index]<=target){
            ds.push_back(arr[index]);
            combine(arr,ans,ds,target-arr[index],index);
            ds.pop_back();
         }
        // for(int i=index;i<candidates.size();i++){
        //     ds.push_back(candidates[i]);
        //     sum+=candidates[i];
        //     combine(candidates,ans,ds,target,sum,index+1);
        //     ds.pop_back();
        // }

        combine(arr,ans,ds,target,index+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        combine(candidates,ans,ds,target,0);
        return ans;
        
    }
};