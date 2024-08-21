#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-k+1;i++){
			int max=0;
			for(int j=i;j<i+k;j++){
				if(max<a[j]){
					max=a[j];
				}
			}
			cout<<max<<" ";
		}
		cout<<endl;
	}
}
