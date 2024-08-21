#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long giua=pow(2,n-1);
		while(1){
			if(n==1){
				cout<<"1\n";
				break;
			}
			if(giua==k){
				cout<<n<<"\n";
				break;
			}
			if(giua<k){
				k=giua-(k-giua);
			}
			n--;
			giua/=2;
		}
	}
}
