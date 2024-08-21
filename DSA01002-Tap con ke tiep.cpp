#include<bits/stdc++.h>
using namespace std;
int n,k;
vector <int> a(k+1);

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;	
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		int i=k;
		while(a[i] == n-k+i){
			i--;
		}
		if(i == 0){
			a[i]=0;
		}
		else a[i]++;
		while(i<k){
			a[i+1]=a[i]+1;
			i++;
		}
		for(int j=1;j<=k;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}	
}
