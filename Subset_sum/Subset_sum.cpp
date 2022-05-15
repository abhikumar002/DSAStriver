// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subset(int index, vector<int>& ans,int N, vector<int> &arr,int sum){
        if(N==index){ ans.push_back(sum); return;} 
    
            subset(index+1,ans,N,arr,sum+arr[index]);
            subset(index+1,ans,N,arr,sum);

    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum=0;
         subset(0,ans,N,arr,sum);
         return ans;
        
    }
};






// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends