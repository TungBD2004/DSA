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
	for(int j=b[i-1] + 1;j<=n-k+i;j++){
		b[i]=j;
		if(i == k){
			in();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(n+1);
		b.resize(k+1,0);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		Try(1);
	}
}
