#include<bits/stdc++.h>
using namespace std;
int n,k;

vector<vector<int>> luu,a;
vector<int> b,used;
void tinh(){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i][b[i]];
	}
	if(sum==k){
		luu.push_back(b);
	}
}
void Try(int i){
	for(int j=0;j<n;j++){
		if(!used[j]){
			used[j]=1;
			b[i]=j;
			if(i==n-1){
				tinh();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}

int main(){
	cin>>n>>k;
	a.resize(n, vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}	
	}
	b.clear();
	b.resize(n);
	used.resize(n,0);
	Try(0);
	sort(luu.begin(),luu.end());
	cout<<luu.size()<<endl;
	for(auto i:luu){
		for(auto j:i){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
