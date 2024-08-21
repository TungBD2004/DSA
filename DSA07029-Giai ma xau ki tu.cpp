#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		stack<int> st2;
		for(int i=0;i<s.size();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				int so=0;
				while(i<s.size() && s[i] >= '0' && s[i] <= '9'){
					so=so*10+s[i]-'0';
					i++;
				}
				i--;
				st2.push(so);
			}
			else if(s[i] == ']'){
				string tam="";
				while(st.top() != "["){
					tam=st.top()+tam;
					st.pop();
				}
				st.pop();
				string luu="";
				int dem=st2.top();
				st2.pop();
				while(dem--){
					luu+=tam;
				}
				st.push(luu);
			}
			else {
				st.push(string(1,s[i]));
				if(s[i]=='[' && (i==0 || s[i-1] < '0' || s[i-1] >'9')){
					st2.push(1);
				}
			}
		}
		string ans="";
		while(!st.empty()){
			ans+=st.top();
			st.pop();
		}
		cout<<ans<<endl;
	}
}
