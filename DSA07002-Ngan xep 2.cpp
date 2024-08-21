#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int x;
	stack<int> st;
	string s;
	while(t--){
		cin>>s;
		if(s == "PUSH"){
			cin>>x;
			st.push(x);
		}
		else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			if(st.empty()){
				cout<<"NONE";
			}
			else {
				cout<<st.top();
			}
			cout<<endl;
		}
	}
	
}
