#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		priority_queue<int> v;
		for(auto it : mp){
			v.push(it.second);
		}
		int ans=0;
		while(k--){
			int tam=v.top();
			v.pop();
			tam--;
			v.push(tam);
		}
		while(!v.empty()){
			int tam=v.top();
			ans=ans+tam*tam;
			v.pop();
		}
		cout<<ans<<endl;
	}
}
