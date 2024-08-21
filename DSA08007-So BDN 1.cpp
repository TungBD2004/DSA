#include<bits/stdc++.h>
using namespace std;

long long chuyendoi(string s){
	long long x=0;
	for(int i=0;i<s.size();i++){
		x=x*10+s[i] -'0';
	}
	return x;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		queue<string> q;
		long long dem=0;
		q.push("1");
		while(1){
			string s=q.front();
			q.pop();
			if(chuyendoi(s) <= n){
				dem++;
			}
			else {
				break;
			}
			q.push(s+"0");
			q.push(s+"1");
		}
		cout<<dem<<endl;
	}
}
