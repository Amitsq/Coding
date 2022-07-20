

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

// //
// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);



// int main()
// {
//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));

//     string arr_temp_temp;
//     getline(cin, arr_temp_temp);

//     vector<string> arr_temp = split(rtrim(arr_temp_temp));

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         int arr_item = stoi(arr_temp[i]);

//         arr[i] = arr_item;
//     }

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }
// //