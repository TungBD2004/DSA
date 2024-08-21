#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long f[100];
		f[1]=f[2]=1;
		for(int i=3;i<=100;i++){
			f[i]=f[i-1]+f[i-2];
		}
		while(n>2){
			if(k <= f[n-2]){
				n-=2;
			}
			else {
				k-=f[n-2];
				n--;
			}	
		}
		if(n == 1){
			cout<<"A\n";
		}
		else cout<<"B\n";
	}
}
