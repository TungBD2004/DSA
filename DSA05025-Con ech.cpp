#include<bits/stdc++.h>
using namespace std;

long long fibo(int n){
	long long f[92];
	f[0]=1;
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=50;i++){
		f[i]=f[i-2]+f[i-1]+f[i-3];
	}
	return f[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibo(n)<<endl;
	}
}
