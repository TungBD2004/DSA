#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ok=0;
		for(int i=2;i<=sqrt(n)+1;i++){
			if(nt(i) && nt(n-i)){
				cout<<i<<" "<<n-i;
				ok=1;
				break;
			}
		}
		if(ok==0){
			cout<<"-1";
		}
		cout<<endl;
	}
}
