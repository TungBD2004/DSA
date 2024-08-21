#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='0'){
				s[i]='1';
			}
			else {
				s[i]='0';
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			cout<<s[i];
		}
		cout<<endl;
	}
}
