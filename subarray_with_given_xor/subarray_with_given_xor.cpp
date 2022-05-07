int Solution::solve(vector<int> &A, int B) {
    map<int,int> mp;
    int cnt=0;
    int xorr=0;
    for(auto x:A){
       xorr^=x;

       if(xorr==B) cnt++;
       if (mp.find(xorr^B)!=mp.end()) cnt+=mp[xorr^B];

       mp[xorr]+=1;
    }

    return cnt;
}
