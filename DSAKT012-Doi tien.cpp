#include<bits/stdc++.h>
using namespace std;

int n,s,dem;
int a[30];

void Try(int i,int tien,int kq){
	if(i==n || tien >=s || kq>dem){
		if(s==tien){
			dem=min(dem,kq);
		}
		return;
	}
	Try(i+1,tien,kq);
	Try(i+1,tien+a[i],kq+1);
}
int main(){
	cin>>n>>s;
	dem=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Try(0,0,0);
	if(dem!=INT_MAX){
		cout<<dem;
	}
	else cout<<"-1";
}
