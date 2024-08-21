#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100],b[100];
bool ok;
int dem;
void kiemtra(){
	dem++;
	for(int i=1;i<=k;i++){
		if(a[i] != b[i]){
			return ;
		}
	}
	ok=true;
}

void Try(int i){
	if(ok){
		return ;
	}
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k)
		kiemtra();
		else Try(i+1);
	}
}

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		dem=0;
		ok=false;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>b[i];
		}
		a[0]=0;
		Try(1);
		cout<<dem<<endl;
	}
}
