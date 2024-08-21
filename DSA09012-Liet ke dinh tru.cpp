#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<int>> a;
vector<bool> ok;

void DFS(int u){
	ok[u]=true;
	for(int i=0;i<a[u].size();i++){
		if(!ok[a[u][i]])
		DFS(a[u][i]);
		
	}
}
int check(int s,int lt){
	ok.clear();
	ok.resize(m+1,0);
	ok[s]=true;
	int dem=0;
	for(int i=1;i<=m;i++){
		if(!ok[i]){
			DFS(i);
			dem++;
		}
	}
	if(dem > lt){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		a.clear();
		a.resize(m+1);
		ok.clear();
		ok.resize(m+1,0);
		while(n--){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}	
		int tplt=0;	
		for(int i=1;i<=m;i++){
			if(!ok[i]){
				DFS(i);
				tplt++;	
			}
		}
		for(int i=1;i<=m;i++){
			if(check(i,tplt)){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
