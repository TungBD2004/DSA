#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<int> v;
		while(n){
			v.push_back(n%10);
			n/=10;
		}
		long long ans=0;
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			int tam=0;
			for(int j=i;j<v.size();j++){
				tam=tam*10+v[j];
				ans+=tam;
			}
		}
		cout<<ans<<endl;
	}
}
