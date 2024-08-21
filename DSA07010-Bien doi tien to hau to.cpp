#include<bits/stdc++.h>
using namespace std;

int sosanh(char s){
	if(s=='-' || s == '+'){
		return 2;
	}
	if(s=='*' || s=='/'){
		return 3;
	}
	if(s=='^')
	return 4;
	return 1;
}

string trungTo_hauTo(string s){
	stack<char> st;
		string kq="";
		for(int i=0;i<s.size();i++){
			if(s[i] >='a' && s[i] <='z'){
				kq+=s[i];
			}
			else if(s[i] >='A' && s[i] <='Z'){
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
		while(!st.empty()){
			if(st.top() != '('){
				kq+=st.top();
			}
			st.pop();
		}
		return kq;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%'){
				string s1=st.top();
				st.pop();
				string s2=st.top();
				st.pop();
				string tam;
				tam='(' + s1 +s[i] +s2 + ')';
				st.push(tam);
			}
			else {
				st.push(string(1,s[i]));
			}
		}
		string k=st.top();
		k=trungTo_hauTo(k);
		cout<<k<<endl;
	}
}
