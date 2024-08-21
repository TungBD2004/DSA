#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=0;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<s.size();i++){
			if(s[i] == '('){
				st.push(i);
			}
			else {
				st.pop();
				if(!st.empty()){
					ans=max(ans,i-st.top());
				}
				if(st.empty()){
					st.push(i);
				}	
			}
		}
		cout<<ans<<endl;
	}
}
