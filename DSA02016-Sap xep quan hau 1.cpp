#include<bits/stdc++.h>
using namespace std;

int c[100],d1[100],d2[100];
int dem,n;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1){
			c[j]=d1[i-j+n]=d2[i+j-1]=0;
			if(i==n){
				dem++;
			}
			else Try(i+1);
			c[j]=d1[i-j+n]=d2[i+j-1]=1;
		}
	}
}	

int main(){
	int t;
	cin>>t;
	while(t--){
		dem=0;
		cin>>n;
		for(int i=0;i<100;i++){
			c[i]=d1[i]=d2[i]=1;
		}
		Try(1);
		cout<<dem<<endl;
	}
}
