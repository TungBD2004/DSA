#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		set<int> se,se2;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			se2.insert(b[i]);
		}
		map<int ,int > mp;
		for(auto it:se) mp[it]++;
		for(auto it:se2) mp[it]++;
		for(auto it:mp){
			cout<<it.first<<" ";
		}
		cout<<endl;
		for(auto it:mp){
			if(it.second >=2){
				cout<<it.first<<" ";
			}
		}
		cout<<endl;
	}
}
