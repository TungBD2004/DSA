#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int min=10e9;
		int luu;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i] + a[j]) <= min ){
					min=abs(a[i] + a[j]);
					luu=a[i]+a[j];
				}
			}
		}
		cout<<luu<<endl;
	}
}
