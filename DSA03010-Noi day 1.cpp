#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		multiset<int> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		int dem=0;
		while(se.size() != 1){
			int x=*se.begin();
			se.erase(se.find(*se.begin()));
			int y=*se.begin();
			se.erase(se.find(*se.begin()));
			dem+=x+y;
			se.insert(x+y);
		}
		cout<<dem<<endl;
	}
}
