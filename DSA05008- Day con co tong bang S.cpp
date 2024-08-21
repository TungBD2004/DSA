#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int ok=0;
		for(int i=n-1;i>=0;i--){
			int k=s;
			for(int j=i;j>=0;j--){
				if(a[j] <= k){
					k-=a[j];
				}
			}
			if(k == 0){
				ok=1;break;
			}
		}
		if(ok){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
