#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--){
   
    int g,p;
	cin>>g>>p; //prices of balloons
    
	int n;
	cin>>n;  //no of participants
    int count=0;
	int temp=0;
	
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a >> b;

		count=count+a;
		temp=temp+b;
	}



cout << max(count, temp) * min(g, p) + min(count, temp) * max(g, p) << "\n";




	}



}