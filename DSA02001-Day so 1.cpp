#include<bits/stdc++.h>
using namespace std;

vector<int> a,b;
int n;

void in(){
	cout<<"[";
	for(int i=0;i<a.size();i++){
		cout<<a[i];
		if(i == a.size()-1){
			cout<<"]";
		}
		else cout<<" ";
	}
	cout<<endl;
}

void Try(int i){
	in();
	if(i==1)
	return ;
	for(int j=0;j<i-1;j++){
		b.push_back(a[j] + a[j+1]);
	}
	a=b;
	a.resize(i-1);
	b.clear();
	Try(i-1);
}

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		Try(n);
	}
}
