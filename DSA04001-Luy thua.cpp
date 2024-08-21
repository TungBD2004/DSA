#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long ans=pow(n,k/2);
		long long dem;
		long long ans1=ans*ans%mod;
		if(k==0){
			dem=1;
		}
		else if(k==1){
			dem=n;
		}
		else if(k%2==0){
			dem=ans1;
		}
		else {
			dem=(ans1*n)%mod;
		}
		cout<<dem<<endl;
	}
}
