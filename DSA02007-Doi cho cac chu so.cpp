#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		for(int i=0;i<s.size();i++){
			if(k==0){
				break;
			}
			char x='0';
			for(int j=i+1;j<s.size();j++){
				x=max(x,s[j]);
			}
			if(x<=s[i]){
				continue;
			}
			string tam=s;
			for(int j=i+1;j<s.size();j++){
				if(x==s[j]){
					string h=s;
					swap(h[i],h[j]);
					tam=max(tam,h);
				}
			}
			s=tam;
			k--;
		}
		cout<<s<<endl;
	}
	
}
