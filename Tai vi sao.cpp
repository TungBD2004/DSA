#include<bits/stdc++.h>
using namespace std;

vector<bool> ok;
vector<vector<int>> a;

void BFS(int u){
	queue<int> q;
	q.push(u);
	ok[u]=false;
	cout<<u<<" ";
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<a[x].size();i++){
			int y=a[x][i];
			if(ok[y]){
				q.push(y);
				ok[y]=false;
				cout<<y<<" ";
			}
		}
	}
	cout<<endl;
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
		ok.resize(m+1,true);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		BFS(k);
	}
}

