#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int test;
		cin>>test;
		string s;
		cin>>s;
		vector<int> a;
		for(int i=0;i<s.size();i++){
			a.push_back(s[i]-'0');
		}
		int i=a.size()-2;
		while(i>=0 && a[i] >= a[i+1]){
			i--;
		}
		
		if(i<0){
			cout<<test<<" BIGGEST\n";
			continue;
		}
		else {
			int j=a.size()-1;
			while(a[i] >= a[j] ){
				j--;
			}
			swap(a[i],a[j]);
			int l=i+1,r=a.size()-1;
			while(l<r){
				swap(a[l],a[r]);
				l++,r--;
			}
		}
		cout<<test<<" ";
		for(int i=0;i<a.size();i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
