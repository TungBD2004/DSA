#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];
vector<string> tam;
vector<vector<string>> luu;

void nhap(){
	vector<string> x;
	for(int i=1;i<=k;i++){
		x.push_back(tam[a[i]]);
	}
	sort(x.begin(),x.end());
	luu.push_back(x);
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			nhap();
		}
		else Try(i+1);
	}
}

int main(){
	
	cin>>n>>k;
	set<string> se;
	for(int i=1;i<=n;i++){
		string m;
		cin>>m;
		se.insert(m);
	}
	tam.push_back("");
	
	for(auto it : se){
		tam.push_back(it);
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
