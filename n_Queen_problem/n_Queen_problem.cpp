class Solution {
public:
    bool isSafe(int col,int n,int row,vector<string>& temp){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0) {
            if(temp[row][col]=='Q') return false;
            row--;
            col--;
        }
        
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(temp[row][col]=='Q') return false;
            col--;
        }
        
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(temp[row][col]=='Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    
    void solve(int col,int n,vector<vector<string>>& ans,vector<string>& temp){
        if(col==n){ ans.push_back(temp); return; }
        
        for(int row=0;row<n;row++){
            if(isSafe(col,n,row,temp)){
                temp[row][col]='Q';
                solve(col+1,n,ans,temp);
                temp[row][col]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            temp[i]=s;
        solve(0,n,ans,temp);
        return ans;
    }
};