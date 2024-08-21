#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];
vector<string> s;
vector<vector<string>> luu;

void nho(){
	vector<string> x;
	for(int i=1;i<=k;i++){
		x.push_back(s[a[i]]);
	}
	sort(x.begin(),x.end());
	luu.push_back(x);
}
void Try(int i){
	for(int j=a[i-1] + 1;j<=n-k+i;j++ ){
		a[i]=j;
		if(i==k){
			nho();
		}
		else Try(i+1);
	}
}

int main(){
	freopen("INPUT.txt","r",stdin);
	cin>>n>>k;
	set<string> se;
	for(int i=1;i<=n;i++){
		string m;
		cin>>m;
		se.insert(m);
	}
	s.push_back("");
	for(auto it : se){
		s.push_back(it);
	}
	n=se.size();
	Try(1);
	sort(luu.begin(),luu.end());
	for(auto i:luu){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
