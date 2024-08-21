#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> a,b,c;
int dem;
void luu(){
	vector<int> tam=c;
	sort(tam.begin(),tam.end());
	if(tam == c){
		dem++;
	}
}
void Try(int i){
	for(int j=b[i-1]+1;j<=n-k+i;j++){
		b[i]=j;
		c[i]=a[b[i]];
		if(i==k){
			luu();
		}
		else Try(i+1);
	}
}

int main(){
	dem=0;
	cin>>n>>k;
	a.resize(n+1);
	b.resize(k+1);
	c.resize(k+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1);
	cout<<dem;
}
