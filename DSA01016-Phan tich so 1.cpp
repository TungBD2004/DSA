#include<bits/stdc++.h>
using namespace std;


void Try(int n,int hieu,vector<int> a){
	if(hieu == 0){
		cout << "(";
        for (int i = 0; i < a.size() - 1; ++i) {
            cout << a[i] << " ";
        }
        cout << a.back() << ") ";
	}
	for(int i=n;i>=1;i--){
		if(hieu>=i){
			a.push_back(i);
			Try(i,hieu-i,a);
			a.pop_back();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		Try(n,n,{});
		cout<<endl;
	}
}
