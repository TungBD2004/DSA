#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int h=min(k,n-k);
		long long s1=0,s2=0;
		for(int i=0;i<h;i++){
			s1+=a[i];
		}
		for(int i=h;i<n;i++){
			s2+=a[i];
		}
		cout<<s2-s1<<endl;
	}
}
