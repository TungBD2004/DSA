#include<bits/stdc++.h>
using namespace std;

int main(){
	int c,n,k;
	cin>>c>>n;
	int a[1000]={};
	a[0]=1;
	for(int i=1;i<=n;i++){
		cin>>k;
		for(int j=c;j>=k;j--){
			if(a[j] == 0 && a[j-k]==1) {
				a[j]=1;
			}
		}
	}
	for(int i=c;i>=0;i--){
		if(a[i]){
			cout<<i;
			break;
		}
	}
}
