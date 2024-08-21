#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> ok;

void BFS(int u){
	queue<int> qe;
	qe.push(u);
	ok[u]=false;
	cout<<u<<" ";
	while(!qe.empty()){
		int x=qe.front();
		qe.pop();
		for(int i=0;i<ke[x].size();i++){
			int y=ke[x][i];
			if(ok[y]){
				qe.push(y);
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
		ke.clear();
		ke.resize(m+1);
		ok.clear();
		ok.resize(m+1,true);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		BFS(k);
		cout<<endl;
	}
}
