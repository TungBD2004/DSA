#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		int a[100];
		int dem=0;
		cin>>n>>k;
		map<int,int> mp;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int i=k;
		while(a[i] == n-k+i && i>0){
			i--;
		}
		a[i]++;
		while(i<k){
			a[i+1]=a[i]+1;
			i++;
		}
		for(int j=1;j<=k;j++){
			if(mp[a[j]]==0)
			dem++;
		}
		cout<<dem<<endl;
	}
}
