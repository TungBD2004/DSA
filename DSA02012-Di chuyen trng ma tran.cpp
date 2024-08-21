#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100][100];
int dem;
int used[100][100];
void Try(int i,int j){
	if(i==n || j==m){
		dem++;
		return ;
	}
	if(!used[i+1][j] && i<n){
		Try(i+1,j);
	}
	if(!used[i][j+1] && j<m){
		Try(i,j+1);
	}
	
}


int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		dem=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				used[i][j]=0;
			}
		}
		Try(1,1);
		cout<<dem<<endl;
	}
}
