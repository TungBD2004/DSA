#include<bits/stdc++.h>
using namespace std;

using ll=long long ;
const long long mod = 1e9 + 7;

ll luythua(ll n, ll k){
	if(k==0)
	return 1;
	long long m=luythua(n,k/2);
	long long ans=(m*m)%mod;
	if(k%2==0){
		return ans;
	}
	return (ans*n)%mod;
}
ll dao(ll n){
	ll ans=0;
	while(n>0){
		ans=ans*10+n%10;
		n/=10;
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<luythua(n,dao(n))<<endl;
	}
}
