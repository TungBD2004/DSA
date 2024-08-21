#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int giua=pow(2,n-1);
		while(1){
			if(n==1){
				cout<<"A\n";
				break;
			}
			if(giua==k){
				cout<<char(n-1+'A')<<endl;
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
