#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
bool ok=true;
vector<vector<int>> c;
void nhap(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void in(){
	vector<int> b;
	for(int i=1;i<=k;i++){
		b.push_back(a[i]);
	}
	c.push_back(b);
}
void sinh(){
	int i=k;
	while(i>0 && a[i] == n-k+i){
		i--;
	}
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else ok=false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		while(ok){
			in();
			sinh();
		}
		for(int i=c.size()-1;i>=0;i--){
			for(int j=0;j<=c[i].size()-1;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
