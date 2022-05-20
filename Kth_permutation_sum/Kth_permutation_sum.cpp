class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> ar;
        int fact=1;
        for(int i=1;i<n;i++) { fact=fact*i; ar.push_back(i); }
        ar.push_back(n);
        k=k-1;
        string ans="";
        while(1){
            ans=ans+to_string(ar[k/fact]);
            ar.erase(ar.begin()+ k/fact);
            if(ar.size()==0) break;
            k=k%fact;
            fact=fact/ar.size();
        }
        
        return ans;
        
    }
        
};