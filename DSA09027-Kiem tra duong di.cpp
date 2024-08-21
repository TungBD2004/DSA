#include<bits/stdc++.h>
using namespace std;

vector<bool> ok;
vector<vector<int>> a;
int m,n,s1,s2;
void BFS(int u){
	ok.clear();
	ok.resize(m+1,true);
	queue<int> q;
	q.push(u);
	ok[u]=false;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<a[x].size();i++){
			int y=a[x][i];
			if(ok[y]){
				q.push(y);
				ok[y]=false;
			}
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		a.clear();
		a.resize(m+1);
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		int q;
		cin>>q;
		while(q--){
			int s1,s2;
			cin>>s1>>s2;
			BFS(s1);
			if(!ok[s2]){
				cout<<"YES\n";
			}
			else cout<<"NO\n";
		}
		
	}
}
