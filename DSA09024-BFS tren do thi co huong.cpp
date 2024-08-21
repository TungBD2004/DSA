#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> ok;

void bfs(int u){
	queue<int> q;
	q.push(u);
	cout<<u<<" ";
	ok[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<ke[x].size();i++){
			int y=ke[x][i];
			if(!ok[y]){
				q.push(y);
				ok[y]=true;
				cout<<y<<" ";
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,k;
		cin>>m>>n>>k;
		ke.clear();
		ke.resize(m+1);
		ok.clear();
		ok.resize(m+1,0);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
		}
		bfs(k);
		cout<<endl;
	}
}
