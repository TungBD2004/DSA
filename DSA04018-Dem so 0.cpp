#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(a[0]==1){
			cout<<"0"<<endl;
			break;
		}
		int x=0;
		auto vitri=upper_bound(a,a+n,x);
		cout<<vitri-a<<endl;
	}
}
