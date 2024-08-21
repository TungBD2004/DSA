#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		if(i!=8){
			cin>>a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] == pow(2,31)-1){
			cout<<"vitri";
		}
		else
		cout<<a[i]<<" ";
	}
}
