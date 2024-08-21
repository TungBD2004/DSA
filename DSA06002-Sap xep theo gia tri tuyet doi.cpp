#include<bits/stdc++.h>
using namespace std;
int n,x;
vector<pair<int,int>> a;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(abs(x-a.first) == abs(x-b.first)){
		return a.second < b.second;
	}
	return abs(a.first-x)<abs(b.first-x);
}
int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		a.resize(n);
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			a[i].second = i;
		}
		sort(a.begin(),a.end(),cmp);
		for(auto it : a){
			cout<<it.first<<" ";
		}
		cout<<endl;
	}
}
