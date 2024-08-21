#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		vector<int> a[1000];
		for(int i=1;i<=n;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
		}
		for(int i=1;i<=m;i++){
			cout<<i<<": ";
			for(int j=0;j<a[i].size();j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
