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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			int k=i;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[k]){
					k=j;
				}
			}
			if(i!=k){
				dem++;
				swap(a[i],a[k]);
			}
		}
		cout<<dem<<endl;
	}
}
