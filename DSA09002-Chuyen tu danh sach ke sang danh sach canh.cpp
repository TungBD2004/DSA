#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<int> a[100];
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		s += " ";
		int so=0;
		int j=0;
		while(j<s.size()){
			if(s[j] >= '0'  && s[j] <= '9'){
				so= so*10 + s[j]-'0';
			}
			else if(so>0){
				a[i].push_back(so);
				so=0;
			}
			j++;
		}
			
	}
	for(int i=1;i<=n;i++){
		sort(a[i].begin(),a[i].end());
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i].size();j++){
			if(i < a[i][j]){
				cout<<i<<" "<<a[i][j]<<endl;
			}
		}
	}
}
