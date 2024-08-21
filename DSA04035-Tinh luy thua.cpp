#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

long long luythua(long long a,long long b){
	if(b==0){
		return 1;
	}
	long long x=luythua(a,b/2);
	if(b%2 == 0){
		return (x * x) % MOD;
	}
	return (a * ((x * x)%MOD)) % MOD;
	
}

int main(){
	long long a,b;
	while(cin>>a>>b){
		if(a==0 && b==0){
			break;
		}
		cout<<luythua(a,b)<<endl;
	}
}
