#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,m,p;
		cin>>n>>m>>p;
		int a[n],b[m],c[p];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		for(int i=0;i<p;i++){
			cin>>c[i];
		}
		int i=0,j=0,h=0;
		int ok=0;
		while(i<n && j<m && h<p){
			if(a[i] == b[j] && a[i] == c[h]){
				cout<<a[i]<<" ";
				i++,j++,h++;
				ok=1;
				continue;
			}
			if(a[i] <b[j]){
				i++;
			}
			else if(b[j] < c[h]){
				j++;
			}
			else h++;	
		}
		if(!ok){
			cout<<"NO";
		}
		cout<<endl;
	}
}
