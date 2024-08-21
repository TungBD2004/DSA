#include<bits/stdc++.h>
using namespace std;

int n,a[1000];
int sum;		
bool ok;

void Try(int i,int s){
	if(i==n || ok || s==sum/2 ){
		if(s==sum/2){	
			ok=true;
		}
		return;
	}
	if(s + a[i] <= sum/2 ){
		Try(i+1,s+a[i]);		
	}
	Try(i+1,s);	
}


int main(){
	int t;
	cin>>t;
	while(t--){	
		ok=false;
		cin>>n;
		sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum % 2==0){
		Try(0,0);
		}
		if(ok){
		cout<<"YES\n";
		}	
		else cout<<"NO\n";
	}
	
	
}
