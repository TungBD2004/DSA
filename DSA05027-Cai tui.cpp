#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		int c[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(j>=a[i]){
					c[i][j]=max(c[i-1][j],c[i-1][j-a[i]]+b[i]);
				}
				else c[i][j]=c[i-1][j];
			}
		}
		cout<<c[n][m]<<endl;
	}
}
