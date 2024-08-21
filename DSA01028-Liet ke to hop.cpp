#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> a,b;

void in(){
	for(int i=1;i<=k;i++){
		cout<<a[b[i]]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=b[i-1]+1;j<=n;j++){
		b[i]=j;
		if(i==k){
			in();
		}
		else Try(i+1);
	}
}
int main(){
	
	cin>>n>>k;
	set<int> se;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		se.insert(x);
	}
	a.push_back(-1);
	for(auto it:se){
		a.push_back(it);
	}
	n=se.size();
	b.resize(n + 1);
	for(int i=0;i<=n;i++){
		b[i]=i;
	}	
	Try(1);
}
