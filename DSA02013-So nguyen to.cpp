#include<bits/stdc++.h>
using namespace std;

int n,p,s;
vector<int> a;
int used[1000];
vector<vector<int>> v;
int dem;
int nt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void Try(int i,int tong,vector<int> luu){
	if(luu.size() == n){
		if(tong == s){
			v.push_back(luu);
		}
		return ;
	}
	for(int j=i;j<a.size();j++){
		if(tong + a[j] <= s){
			luu.push_back(a[j]);
			Try(j+1,tong+a[j],luu);
			luu.pop_back();
		}
		else return ;
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<200;i++){
			if(nt(i)){
				a.push_back(i);
			}
		}
		v.clear();
		cin>>n>>p>>s;
		for(int i=0;i<a.size();i++){
			if(a[i] > p){
				Try(i,0,{});
				break;
			}
		}
		cout<<v.size()<<endl;
		sort(v.begin(),v.end());
		for(auto i:v){
			for(auto j:i){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
}
