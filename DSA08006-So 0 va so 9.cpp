#include<bits/stdc++.h>
using namespace std;

int kiemtra(string s,int n){
	long long x=0;
	for(int i=0;i<s.size();i++){
		x=(x*10 + s[i]-'0');
	}
	if(x % n == 0){
		return 1;
	}
	return 0;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("9");
		while(1){
			string s=q.front();
			q.pop();
			if(kiemtra(s,n)){
				cout<<s<<endl;
				break;
			}
			q.push(s+"0");
			q.push(s+"9");
		}
	}
}
