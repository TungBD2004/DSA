#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			a[i].second=i;
		}
		sort(a,a+n);
		int dem=-1,MAX=a[0].second,k=a[0].first;
		for(int i=1;i<n;i++){
			if(a[i].first>k){
				dem=max(dem,a[i].second-MAX);
			}
			if(MAX > a[i].second){
				k=a[i].first;
				MAX=a[i].second;
			}
		}
		cout<<dem<<endl;
	}
}
