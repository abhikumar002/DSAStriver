class Solution {
public:
    int trap(vector<int>& height) {
    
    
    // 2nd appproch -----------------------------------------------------------
    int a=0;
    int b=height.size()-1;
    int sum=0;
    int leftmax=0;
    int rightmax=0;
    while(a<=b){

        if(leftmax<rightmax){
            if(height[a]>=leftmax) leftmax=height[a];
            else sum+=(leftmax-height[a]);
            a++;
        }
        else{
            if(height[b]>=rightmax) rightmax= height[b];
            else sum+=(rightmax-height[b]);
            b--;
        }
    }
    return sum;
        
    }      
        
        
//         // 1st approch ----------------------------------------
//          long long water=0;
//         int n=height.size();
//         //  cout<<size<<endl;
//         int lmax[n],rmax[n];
//         lmax[0]=height[0];
//         for(int i=1;i<n;i++)
//             lmax[i]=max(lmax[i-1],height[i]);
            
//         rmax[n-1]=height[n-1];
//         for(int i=(n-1)-1;i>=0;i--)
//             rmax[i]=max(rmax[i+1],height[i]);
        
//         for(int i=0;i<n;i++)
//             water+= min(lmax[i],rmax[i])-height[i];
            
//             return water;
        
//     }
};