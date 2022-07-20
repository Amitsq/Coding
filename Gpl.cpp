#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){

     long long int N;
     cin>>N;

     string S;
     cin>>S;
    
    int  Result=0;
    int M=1;
     for(int i=S.size()-1;i>=0;i--){

         if(S[i]=='1'){

             Result=Result+M;
         }
         M=M*2;
     }


   cout<<Result<<endl;

    }
}



***THis program successfully exceuted only for two case.****
