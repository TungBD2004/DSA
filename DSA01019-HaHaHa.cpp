#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> x;
string s;
void luu(){
	if(s[0] == 'H' && s[s.size()-1] == 'A' && s.find("HH")==-1){
		x.push_back(s);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j == 0){
			s[i]='H';
		}
		else s[i]='A';
		if(i == n-1){
			luu();
		}
		else Try(i+1);
	}
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		s.resize(n);
		x.clear();
		Try(0);
		sort(x.begin(),x.end());
		for(string it:x){
			cout<<it<<endl;
		}
	}
	
}
