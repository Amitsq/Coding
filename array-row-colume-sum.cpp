

#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        int count;
        int mini=min(N,M);
        int sumRow=0;
        int sumCol=0;
        
        for(int j=0;j<mini;j++){
            
            for(int i=0;i<N;i++){
                
                sumCol+=A[i][j];//sum of Colume.
            }
            for(int i=0;i<M;i++){
                sumRow+=A[j][i]; //sum of Row.
            }
            
            if(sumRow==sumCol){
                
                count=1;
            }else{
                count=0;
                break;
            }
            
            
            
        }
        if(count==1){
            return 1;
        }else{
            return 0;
        }
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}  // } Driver Code Ends