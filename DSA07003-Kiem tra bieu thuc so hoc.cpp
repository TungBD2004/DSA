#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> st;
		int OK=0;
		for(int i=0;i<s.size();i++){
			if(s[i] != ')'){
				st.push(s[i]);
			}
			else {
				bool ok=false;
				while(!st.empty()){
					char k=st.top();
					st.pop();
					if(k == '+' || k == '-' || k == '*' || k == '/')
						ok=true;
					if(k == '('){
						break;
						}
					
				}
				if(!ok){
					cout<<"Yes\n";
					OK=1;
					break;
				}	
			}
		}
		if(OK==0)
		cout<<"No\n";
	}
}
