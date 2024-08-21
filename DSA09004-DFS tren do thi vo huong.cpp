#include<bits/stdc++.h>
using namespace std;

vector<bool> ok;
vector<vector<int>> a;

void DFS(int u){
	ok[u]=true;
	cout<<u<<" ";
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
		int m,n,k;
		cin>>m>>n>>k;
		a.clear();
		a.resize(m+1);
		ok.clear();
		ok.resize(m+1,0);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		DFS(k);
		cout<<endl;
	}
}
