#include<bits/stdc++.h>
using namespace std;

int n,dem;
int a[100],b[100],used[100];
bool ok;

void kiemtra(){
	dem++;
	for(int i=1;i<=n;i++){
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
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i == n){
				kiemtra();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}


int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=false;
		dem=0;
		for(int i=1;i<=n;i++){
			used[i]=0;
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		Try(1);
		cout<<dem<<endl;
	}
}
