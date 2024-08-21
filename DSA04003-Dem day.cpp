#include <bits/stdc++.h>
using namespace std;

const int mod = 123456789;

using ll =long long;
ll luythua(ll n,ll k){
	if(k==0)
	return 1;
	ll x=luythua(n,k/2);
	ll y=x*x%mod;
	if(k%2==0)
	return y;
	return (y*n)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<luythua(2,n-1)<<endl;
	}
}
