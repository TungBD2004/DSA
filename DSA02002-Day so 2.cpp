#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a,b;
vector<vector<int>> luu;

void Try(int i){
	luu.push_back(a);
	if(i==1)
	return ;
	for(int j=0;j<i-1;j++){
		b.push_back(a[j]+ a[j+1]);
	}
	a=b;
	b.clear();
	Try(i-1);
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		a.resize(n);
		luu.clear();
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		Try(n);
		reverse(luu.begin(),luu.end());
		for(auto i:luu){
			cout<<"[";
			for(int j=0;j<i.size();j++){
				cout<<i[j];
				if(j == i.size()-1){
					cout<<"] ";
				}
				else cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
