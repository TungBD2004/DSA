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
		sort(a,a+n);
		long long tich=0;
		long long mod=1000000007;	
		for(int i=0;i<n;i++){
			tich+=a[i]*i%mod;
		}
		cout<<tich<<endl;
	}
}
