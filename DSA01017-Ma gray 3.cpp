#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string kq="";
		kq=s[0];
		for(int i=1;i<s.size();i++){
			if(s[i] != s[i-1]){
				kq+="1";
			}
			else kq+="0";
		}
		cout<<kq<<endl;
	}
}
