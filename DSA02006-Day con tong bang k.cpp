#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
int used[100];
vector<vector<int>> v;

void Try(int i){
	for(int j=0;j<=1;j++){
		used[i]=j;
		if(i==n-1){
			int sum=0;
		for(int l=0;l<n;l++){
			if(used[l]){
				sum+=a[l];
			}
		}
		if(sum == k){
			vector<int> tam;
			for(int h=0;h<n;h++){
				if(used[h]){
					tam.push_back(a[h]);
				}
				
			}
			v.push_back(tam);
		}
		}
		else Try(i+1);
	}
}

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		Try(0);
		if(v.empty()){
			cout<<"-1\n";
			continue;
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<"[";
			for(int j=0;j<v[i].size()-1;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<v[i][v[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
}
