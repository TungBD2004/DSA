#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],f[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			f[i]=1;
			for(int j=0;j<i;j++){
				if(a[i] >= a[j]){
					f[i]=max(f[i],f[j]+1);
				}
			}
		}
		sort(f,f+n);
		cout<<n-f[n-1]<<endl;
	}
}
