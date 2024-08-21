#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> a;
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
			a[u].first++;
			a[v].second++;
		}
		int ok=1;
		for(int i=1;i<=m;i++){
			if(a[i].first != a[i].second){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<"1";
		}
		else cout<<"0";
		cout<<endl;
	}
}
