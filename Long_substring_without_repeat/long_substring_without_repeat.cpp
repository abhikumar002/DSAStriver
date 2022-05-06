class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
      int sum=-1;
      int maximum=0;
      vector<int> v(256,-1);
        
      for(int i=0;i<s.length();i++){
          if(v[s[i]]>sum)   sum=v[s[i]];
          v[s[i]]=i;
          maximum=max(maximum,i-sum);
      }
        
        return maximum;
    }
};