#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int gia[10]={1000,500,200,100,50,20,10,5,2,1};
		int dem=0;
		int i=0;
		while(n>0){
			if(gia[i] <=n){
				n-=gia[i];
				dem++;
			}
			else i++;
		}
		cout<<dem<<endl;
	}
	
}
