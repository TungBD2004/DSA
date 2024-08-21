#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<int>> a;
vector<bool> ok;

void BFS(int u){
	queue<int> q;
	q.push(u);
	ok[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<a[x].size();i++){
			int y=a[x][i];
			if(!ok[y]){
				q.push(y);
				ok[y]=true;
			}
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
			BFS(i);
			}
		}
		cout<<dem<<endl;
	}
}
