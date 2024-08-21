#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ok=1;
		if(a[0] > k){
			ok=0;
		}
		int vitri;
		for(int i=0;i<n;i++){
			if(k<a[i]){
				vitri=i;
				break;
			}
			else if(k==a[i]){
				vitri=i+1;
				break;
			}
		}
		if(ok){
			cout<<vitri<<endl;
		}
		else cout<<"-1\n";
		
		
	}
}
