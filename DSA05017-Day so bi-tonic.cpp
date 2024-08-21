#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int f[n],k[n];
		for(int i=0;i<n;i++){
			f[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[i] > a[j]){
					f[i]=max(f[i],f[j]+a[i]);
				}
			}
		}
		for(int i=n-1;i>=0;i--){
			k[i]=a[i];
			for(int j=n-1;j>i;j--){
				if(a[i] > a[j]){
					k[i]=max(k[i],k[j]+a[i]);
				}
			}
		}
		int dem=0;
		for(int i=0;i<n;i++){
			dem=max(dem,f[i]+k[i]-a[i]);
		}
		cout<<dem<<endl;
	}
}
