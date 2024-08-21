#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<int>> a;
vector<bool> ok;

void DFS(int u){
	ok[u]=1;
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
		cin>>m>>n;
		a.clear();
		a.resize(m+10);
		ok.clear();
		ok.resize(m+10,0);
		while(n--){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		int dem=0;
		for(int i=1;i<=m;i++){
			if(!ok[i]){
			dem++;
			DFS(i);
			}
		}
		cout<<dem<<endl;
	}
}
