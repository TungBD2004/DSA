#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> v;
		while(1){
			string s=q.front();
			q.pop();
			if(s.size() > n){
				break;
			}
			else {
				v.push_back(s);				
				q.push(s+"6");
				q.push(s+"8");	
			}
		}
		reverse(v.begin(),v.end());
		cout<<v.size()<<endl;
		for(auto i:v){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
