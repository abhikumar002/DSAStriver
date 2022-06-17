double mul(double m,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans=ans*m;
    }
    return ans;
}

double findNthRootOfM(int n, long long m) {
// 	Write your code here.
    double low=0;
    double high=m+1;
    double eps =1e-8;
    
    while((high-low) > eps){
        double mid=(low+high)/2.0;
        if(mul(mid,n) < m) low=mid;
        else high=mid;
    }
    
    return high;