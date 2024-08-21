#include<bits/stdc++.h>
using namespace std;


long long f[10001];
long long ugly(int n){
	f[1]=1;
	int b2=1,b3=1,b5=1;
	for(int i=2;i<=1e4;i++){
		f[i]=min({f[b2]*2,f[b3]*3,f[b5]*5 });
		if(f[i] == f[b2] * 2){
			b2++;
		}
		if(f[i] == f[b3]*3){
			b3++;
		}
		if(f[i] == f[b5]*5 ){
			b5++;
		}
	}
	return f[n];
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<ugly(n)<<endl;
	}
}
