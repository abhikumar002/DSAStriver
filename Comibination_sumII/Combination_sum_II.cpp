class Solution {
public:
    void combine(int index, vector<int>& arr,vector<vector<int>>& ans, vector<int>& ds, int target){
           if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<arr.size();i++){
            if(i>index && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            combine(i+1,arr,ans,ds,target-arr[i]);
            ds.pop_back(); 
        }

    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combine(0,candidates,ans,ds,target);
        
        return ans;
    }
};