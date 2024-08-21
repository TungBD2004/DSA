#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		if(n<m || 6*(n-m) <m){
			cout<<"-1\n";
		}
		else cout<<m*s/n+1<<endl;
	}
}
