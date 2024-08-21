#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		multiset<long long> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		long long dem=0;
		while(se.size() != 1){
			long long x= *se.begin();
			se.erase(se.find(*se.begin()));
			long long y= *se.begin();
			se.erase(se.find(*se.begin()));
			dem += (x%MOD + y%MOD) % MOD;
			dem%=MOD;
			se.insert((x%MOD + y%MOD) % MOD);
		}
		cout<<dem<<endl;
	}
}
