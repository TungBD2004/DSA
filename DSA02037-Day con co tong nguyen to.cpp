#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> b,a;
vector<vector<int>> kq;
bool nt(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
void nhap(){
	int s=0;
	for(int i:b){
		s+=i;
	}
	if(nt(s)){
		kq.push_back(b);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j == 1){
			b.push_back(a[i]);
		}
		if(i == n-1){
			nhap();
		}
		else Try(i+1);
		if(j == 1){
			b.pop_back();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		kq.clear();
		b.clear();
		cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.rbegin(),a.rend());
		Try(0);
		sort(kq.begin(),kq.end());
		for(auto i:kq){
			for(int j:i){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
}
