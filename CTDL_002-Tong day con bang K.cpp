#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],x[100];
bool ok=true;
int dem=0;
void khoitao(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>0 && x[i]){
		x[i]=0;
		i--;
	}
	if(i>0) x[i]=1;
	else ok=false;	
}
void in(){
	int s=0;
	for(int i=1;i<=n;i++){
		if(x[i]){
			s+=a[i];
		}
	}
	if(s==k){
		for(int i=1;i<=n;i++){
			if(x[i]){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
		dem++;
	}
}

int main(){
	khoitao();
	while(ok){
		in();
		sinh();
	}
	cout<<dem<<endl;
}
