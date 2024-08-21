#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<vector<int>> b;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			int ok=1;
			for(int j=0;j<n-i;j++){
				if(a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					ok=0;
				}	
			}
			if(ok){
					break;
				}
				b.push_back(a);
		}
		for(int i=b.size()-1;i>=0;i--){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
}
