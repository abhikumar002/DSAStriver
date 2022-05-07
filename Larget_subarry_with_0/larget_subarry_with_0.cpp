
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int> mp;
        int sum=0,tempmax=0,maximum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0) maximum=i+1;
            else if(mp.find(sum)!=mp.end()){  
            int t=(i-mp[sum]); 
            tempmax=t; 
            }
            else mp[sum]=i;
            
            
            maximum=max(maximum,tempmax);
        }
        
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        return maximum;
    }
};
