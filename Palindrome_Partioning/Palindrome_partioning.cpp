class Solution {
public:
    bool palindrome(string s, int first,int end){
        while(first<=end){
            if(s[first++]!=s[end--])  return false;
        }
        return true;
    }
    
    void combine(int index,string s,vector<vector<string>>& ans, vector<string>& ds){
        if(index==s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<s.size();++i){
            string str;
            if(palindrome(s,index,i)){
                ds.push_back(s.substr(index,i-index+1));
                combine(i+1,s,ans,ds);
                ds.pop_back();
            }
            
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        int len=s.length();
        combine(0,s,ans,ds);
        
        return ans;
    }
};