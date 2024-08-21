#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n+m];
		for(int i=0;i<n+m;i++){
			cin>>a[i];
		}
		sort(a,a+m+n);
		for(int i=0;i<m+n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
