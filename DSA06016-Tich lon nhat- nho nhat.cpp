#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		cout<<a[n-1]*b[0]<<endl;
	}
}
