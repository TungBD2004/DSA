#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long ans=1;
		if(k>n){
			ans=0;
		}
		else {
			for(int i=n-k+1;i<=n;i++){
				ans*=i;
				ans%=mod;
			}	
		}
		cout<<ans<<endl;
	}
}
