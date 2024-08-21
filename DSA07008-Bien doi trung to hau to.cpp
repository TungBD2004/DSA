#include<bits/stdc++.h>
using namespace std;

int sosanh(char s){
	if(s == '+' || s == '-' ){
		return 3;
	}
	if(s == '*' || s == '/'){
		return 4;
	}
	if(s == '^'){
		return 5;
	}
	return 2;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		string kq="";
		cin>>s;
		stack<char> st;
		for(int i=0;i<s.size();i++){
			if(s[i] >='a' && s[i] <='z'){
				kq+=s[i];
			}
			else if(s[i] >= 'A' && s[i] <='Z'){
				kq+=s[i];
			}
			else if(s[i] == '('){
				st.push(s[i]);
			}
			else if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					kq+=st.top();
					st.pop();	
				}
				st.pop();
			}
			else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
				while(!st.empty() && sosanh(st.top()) >= sosanh(s[i])){
					kq+=st.top();
					st.pop();
				}
				st.push(s[i]);
			}	
		}
		while(!st.empty() ){
			if(st.top() != '('){
				kq+=st.top();
			}
			st.pop();
		}
		cout<<kq<<endl;
	}
}
