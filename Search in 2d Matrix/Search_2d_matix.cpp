class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//          int row=0;
//         for(int i=0;i<matrix.size();i++)
//         {
//             if(matrix[i][0]==target) return 1;
//             else if(matrix[i][0]>target) { row=i-1; break;}
//             else row=i;
//         }
        
//         if(row>=0)
//         for(int i=0;i<matrix[0].size();i++)
//             if(matrix[row][i]==target) return 1;
        
        
        
//         return 0;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        int left=0,right=(n*m)-1;
        int mid=0;
        while(left<=right)
        {
             mid=(left+(right-left)/2);
            if(matrix[mid/m][mid%m]==target) return 1;
            else if(matrix[mid/m][mid%m]<target) left=mid+1;
            else right=mid-1;
        }
        
        return 0;
        
    }
};