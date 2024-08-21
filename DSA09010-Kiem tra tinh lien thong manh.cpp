#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> ok;

void DFS(int u){
	ok[u]=true;
	for(int i=0;i<a[u].size();i++){
		if(!ok[a[u][i]]){
			DFS(a[u][i]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		a.clear();
		a.resize(m+1);
		while(n--){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
		}
		
		int OK=1;
		for(int i=1;i<=m;i++){
			ok.clear();
			ok.resize(m+1,0);
			DFS(i);
			for(int j=1;j<=m;j++){
				if(!ok[j]){
					OK=0;
					break;
				}
			}
			if(OK==0){
				break;
			}
		}
		if(OK){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
