#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> ok;
vector<int> truoc,b;

void DFS(int u){
	ok[u]=true;
	for(int i=0;i<a[u].size();i++){
		if(!ok[a[u][i]]){
			truoc[a[u][i]]=u;
			DFS(a[u][i]);
		}
	}
}
void duongdiDFS(int u,int v){
	DFS(u);
	if(ok[v]){
		int t=v;
		while(t>0){
			b.push_back(t);
			t=truoc[t];	
		}
	}
	else cout<<"-1";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,s1,s2;
		cin>>n>>m>>s1>>s2;
		a.clear();
		a.resize(n+1);
		b.clear();
		b.resize(n+1);
		ok.clear();
		ok.resize(n+1,0);
		truoc.clear();
		truoc.resize(n+1,0);
		while(m--){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		duongdiDFS(s1,s2);
		reverse(b.begin(),b.end());
		for(int i:b){
			if(i>0)
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
