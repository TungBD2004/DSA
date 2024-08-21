#include<bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
vector<string> v;

void Try(int i,int j,string s){
	if(i==n && j==n){
		v.push_back(s);
		return ;
	}
	if(a[i+1][j] == 1 && i<n){
		Try(i+1,j,s+'D');
	}
	if(a[i][j+1] == 1 && j<n){
		Try(i,j+1,s+'R');
	}
}
int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1] == 0 || a[n][n] == 0){
			cout<<"-1\n";
			continue;
		} 
		Try(1,1,"");
		if(v.empty()){
			cout<<"-1\n";
			continue;
		}
		sort(v.begin(),v.end());
		for(auto it:v){
			cout<<it<<" ";
		}
		cout<<endl;
	}
}
