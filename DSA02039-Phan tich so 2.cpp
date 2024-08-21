#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> kq;

void Try(int so,int conlai,vector<int> v){
	if(conlai == 0){
		kq.push_back(v);
		return ;
	} 
	for(int i=so;i>=1;i--){
		if(conlai >= i){
			v.push_back(i);
			Try(i,conlai-i,v);
			v.pop_back();
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		kq.clear();
		Try(n,n,{});
		cout<<kq.size()<<endl;
		for(auto i:kq){
			cout<<"(";
			for(int j=0;j<i.size()-1;j++){
				cout<<i[j]<<" ";
			}
			cout<<i.back()<<") ";
		}
		cout<<endl;
	}
}
