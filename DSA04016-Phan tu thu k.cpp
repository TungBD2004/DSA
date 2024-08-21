#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m];
		int c[m+n];
		int j=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[j++]=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c[j++]=b[i];
		}
		sort(c,c+m+n);
		cout<<c[k-1]<<endl;
	}
}
