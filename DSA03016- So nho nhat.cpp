#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		if(9*d<s){
			cout<<"-1\n";
		}
		else{
			int a[d];
			s--;
			for(int i=d-1;i>=0;i--){
				if(s>=9){
					a[i]=9;
					s-=9;
				}
				else{
					a[i]=s;
					s=0;
				}
			}
			a[0]+=1;
			for(int i=0;i<d;i++){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
