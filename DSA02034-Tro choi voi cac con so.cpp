#include<bits/stdc++.h>
using namespace std;

int n,a[100];
int used[100];

void in(){
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i+1]) == 1){
			return ;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			used[j]=1;
			a[i]=j;
			if(i==n){
				in();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}



int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
