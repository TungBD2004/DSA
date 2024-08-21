#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int sum=0;
		int s=0;
		for(int i=0;i<n;i++){
			sum=max(a[i],sum+a[i]);
			s=max(s,sum);
		}
		cout<<s<<endl;
	}
}
