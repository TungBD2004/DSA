#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int a[100][100];
		int dem=0;
		memset(a,0,sizeof(a));
		for(int i=1;i<=s1.size();i++){
			for(int j=1;j<=s2.size();j++){
				if(s1[i-1] == s2[j-1]){
					a[i][j]=a[i-1][j-1]+1;
				}
				else {
					a[i][j]=max(a[i-1][j],a[i][j-1]);
				}
				dem=max(dem,a[i][j]);
			}
		}
		cout<<dem<<endl;
	}
}
