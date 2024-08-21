#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		a.clear();
		a.resize(m+1);
		while(n--){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		int deg=0;
		for(int i=1;i<=m;i++){
			if(a[i].size() % 2 == 1){
				deg++;
			}
		}
		if(deg == 0){
			cout<<"2";
		}
		else if(deg == 2 ){
			cout<<"1";
		}
		else cout<<"0";
		cout<<endl;
	}
}
