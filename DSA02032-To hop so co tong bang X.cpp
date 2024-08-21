#include<bits/stdc++.h>
using namespace std;

int n,k;
int ok;
vector<vector<int>> luu;
void Try(int giatri,int tong, vector<int> x,int a[]){
	if(tong == k){
		ok=1;
		vector<int> z;
		for(int j=0;j<x.size();j++){
			z.push_back(x[j]);
		}
		luu.push_back(z);
	}
	for(int j=0;j<n;j++){
		if(giatri <= a[j] && tong + a[j] <= k){
			x.push_back(a[j]);
			Try(a[j],tong+a[j],x,a);
			x.pop_back();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		luu.clear();
		ok=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		Try(1,0,{},a);
		if(ok==0){
			cout<<"-1";
		}
		else {
			cout<<luu.size()<<" ";
			for(int i=0;i<luu.size();i++){
				cout<<"{";
				for(int j=0;j<luu[i].size();j++){
					cout<<luu[i][j];
					if(j!=luu[i].size()-1){
						cout<<" ";
					}
				}
				cout<<"} ";
			}
		}
		cout<<endl;
	}	
}
