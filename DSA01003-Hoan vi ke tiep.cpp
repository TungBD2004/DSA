#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n-1;
		while(i>=1 && a[i] >= a[i+1]){
			i--;
		}
		if(i==0){
			for(int j=1;j<=n;j++){
				a[j]=j;
			}
		}
		else {
			for(int j=n;j>i;j--){
				if(a[i] <= a[j]){
					swap(a[i],a[j]);
				}
			}
		}
		for(int k=1;k<=n;k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	
}
