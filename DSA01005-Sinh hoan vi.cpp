#include<bits/stdc++.h>
using namespace std;
int n,a[100];
bool ok=true;
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=n-i+1;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n-1;
	int j=n;
	while(i > 0 && a[i] < a[i+1]){
		i--;
	}
	if(i>0){
		while(a[i] < a[j]){
			j--;
		}
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<=r){
			swap(a[l],a[r]);
			l++,r--;
		}
	}
	else ok=false;
}

int main(){
	freopen("INPUT.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		nhap();
		while(ok){
			in();
			sinh();
		}
		ok=true;
		cout<<endl;
	}
}

