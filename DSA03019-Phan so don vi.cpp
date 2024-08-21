#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long tu,mau;
		cin>>tu>>mau;
		long k;
		while(1){
			if(mau % tu == 0){
				cout<<"1/"<<mau/tu<<endl;
				break;
			}
			else {
				k= mau/tu + 1;
				cout<<"1/"<<k<<" + ";
				tu=k*tu-mau;
				mau=mau*k;
			}
		}
	}
}
