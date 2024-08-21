#include<bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok=true;
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>0 && a[i] ){
		a[i]=0;
		i--;
	}
	if(i>0)
	a[i]=1;
	else ok=false;
}
int check(){
	int l=1,r=n;
	while(l<=r){
		if(a[l] != a[r]){
			return 0;
		}
		l++,r--;
	}
	return 1;
}

int main(){
	cin>>n;
	khoitao();
	while(ok){
		if(check()){
			in();
		}
		sinh();
	}
}
