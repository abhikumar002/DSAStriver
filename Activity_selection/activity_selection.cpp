// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
         vector< pair <int,int> > temp;
        for(int i=0;i<n;i++){
            temp.push_back( make_pair(end[i],start[i]) );
        }
        
        sort(temp.begin(),temp.end());
        
        
        int count=1,limit=0;
        for(int i=0;i<n;i++){
            if(temp[limit].first<temp[i].second){ count++; limit=i; }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends