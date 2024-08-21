#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a[127]={};
		int MAX=0;
		for(char i:s){
			a[i]++;
			MAX=max(MAX,a[i]);
		}
		if(MAX<=s.size()/n+1){
			cout<<"1\n";
		}
		else cout<<"-1\n";
	}
	
}
