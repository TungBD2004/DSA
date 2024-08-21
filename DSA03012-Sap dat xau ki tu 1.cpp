#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> mp;
		int n=s.size();
		for(int i=0;i<n;i++){
			mp[s[i]]++;
		}
		int ok=1;
		for(auto it:mp){
			if(it.second*2-1>n){
				ok=0;	
			}
		}
		if(ok){
			cout<<"1\n";
		}
		else cout<<"-1\n";
	}
}
