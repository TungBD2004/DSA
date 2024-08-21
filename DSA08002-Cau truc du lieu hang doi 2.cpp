#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	queue<int> qe;
	while(t--){
		string s;
		cin>>s;
		int x;
		if(s == "PUSH"){
			cin>>x;
			qe.push(x);
		}
		else if(s == "POP"){
			if(!qe.empty()){
				qe.pop();
			}
		}
		else if(s == "PRINTFRONT"){
			if(!qe.empty()){
				cout<<qe.front()<<endl;
			}
			else cout<<"NONE\n";
		}
	}
}
