#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		int dem=1;
		st.push(1);
		for(int i=0;i<s.size();i++){
			if(s[i] == 'D'){
				dem++;
				st.push(dem);
			}
			else {
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				dem++;
				st.push(dem);
			}
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}
