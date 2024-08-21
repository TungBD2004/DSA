#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int x[1000];
int dem;

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			int sum=0;
			for(int h=1;h<=k;h++){
				if(x[h]<=n)
				sum+=x[h];
			}
			if(sum==s){
				dem++;
			}
		}
		else Try(i+1);
	}
}

int main(){
	while(cin>>n>>k>>s){
		if(n==0 && s==0 && k==0){
			break;
		}
		
		dem=0;
		Try(1);
		cout<<dem<<endl;
	}
}
