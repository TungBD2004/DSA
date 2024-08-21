#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long dem=0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long x=k-a[i]-a[j];
				dem+=lower_bound(a+j+1,a+n,x) -(a+j+1);
			}
		}
		cout<<dem<<endl;
	}
}
