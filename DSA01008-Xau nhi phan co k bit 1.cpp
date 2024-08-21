#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
bool ok=true;
int k;
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}	
	cout<<"\n";
}
void sinh(){
	int i=n;
	while(i>0 && a[i]){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
	}
	else ok=false;
}

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		khoitao();
		while(ok){
			int dem=0;
			for(int i=1;i<=n;i++){
				if(a[i]){
					dem++;
				}
			}
			if(dem==k)
			in();
			sinh();
		}
		ok=true;
		cout<<endl;
	}
}
