#include<bits/stdc++.h>
using namespace std;

int f[101][101][101];


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,p;
		cin>>n>>m>>p;
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		
		memset(f,0,sizeof(f));
		int dem=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int l=1;l<=p;l++){
					if(s1[i-1] == s2[j-1] && s1[i-1] == s3[l-1]){
						f[i][j][l]=f[i-1][j-1][l-1]+1;
					}
					else {
						f[i][j][l]=max({f[i-1][j][l],f[i][j-1][l],f[i][j][l-1]});
					}
					dem=max(dem,f[i][j][l]);
				}
			}
		}
		cout<<dem<<endl;
	}
}
