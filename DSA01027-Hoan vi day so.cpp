#include<bits/stdc++.h>
using namespace std;

int n,a[100],b[100],used[100];

void in(){
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			b[i]=a[j];
			used[j]=1;
			if(i==n){
				in();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	freopen("INPUT.txt","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		used[i]=0;
	}
	sort(a,a+n+1);
	Try(1);
	cout<<endl;
}
