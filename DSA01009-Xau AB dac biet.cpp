#include<bits/stdc++.h>
using namespace std;


string s;
int n,k;
vector<string> luu;
bool check(){
	int dem=0;
	bool ok=false;
	for(int i=0;i<s.size();i++){
		if(s[i] == 'A'){
			dem++;
		}
		else dem=0;
		if(dem>k){
			return false;	
		}
		else if(dem==k){
			if(!ok){		
				ok=true;
			}
		}
	}
	return ok;
}
bool OK=true;
void sinh(){
	if(check()){
			luu.push_back(s);
		}
	int i=s.size()-1;
	while(i>=0 && s[i] == 'B'){
		s[i]='A';
		i--;
	}
	if(i<0){
		OK=false;
		return ;
	}
	s[i]='B';
}


int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		s+='A';
	}
	while(OK){
		sinh();
	}
	cout<<luu.size()<<endl;
	for(int i=0;i<luu.size();i++){
		cout<<luu[i]<<endl;
	}
}
