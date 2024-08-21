#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int f[n+1];
		for(int i=0;i<n;i++){
			f[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[i] > a[j]){
					f[i]=max(f[i],f[j]+a[i]);
				}
			}
		}
		sort(f,f+n);
		cout<<f[n-1]<<endl;
	}
}
