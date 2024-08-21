#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int vitri=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==k){
				vitri=i;
			}
		}
		if(vitri!=-1){
			cout<<vitri+1<<endl;
		}
		else cout<<"NO\n";
	}
}
