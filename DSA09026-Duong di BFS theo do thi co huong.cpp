#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<int> truoc,b;
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
				ok[y]=true;
				truoc[y]=x;
				q.push(y);
			}
		}
	}
}

void duongdiBFS(int u,int v){
	BFS(u);
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
		int m,n,s1,s2;
		cin>>m>>n>>s1>>s2;
		a.clear();
		a.resize(m+1);
		b.clear();
		b.resize(m+1);
		ok.clear();
		ok.resize(m+1,0);
		truoc.clear();
		truoc.resize(m+1,0);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
		}
		duongdiBFS(s1,s2);
		reverse(b.begin(),b.end());
		for(int i:b){
			if(i>0)
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
