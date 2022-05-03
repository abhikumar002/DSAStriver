class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=n+m-2;
        int M=m-1;
        
        double res=1;
        
        for(int i=1;i<=M;i++)
        {
            res=res*(N-M+i)/i;
        }
        return (int)res;
    }
};