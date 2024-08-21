#include<bits/stdc++.h>
using namespace std;

int n,a[10000],used[10000];
vector<vector<int>> v;

void Try(int i){
	for(int j=0;j<=1;j++){
			used[i]=j;		
			if(i==n){
				vector<int> b;
			for(int h=1;h<=n;h++){
				if(used[h]){
					b.push_back(a[h]);
				}
			}
			vector<int> c;
			c=b;
			int ok=1;
			sort(c.begin(),c.end());
			for(int h=0;h<b.size();h++){
				if(c[h] != b[h]){
					ok=0;
				}
			}
			if(ok && b.size()!=1)
				v.push_back(b);	
			}	
			else Try(i+1);	
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1);
	sort(v.begin(),v.end());
	string s[10000]={};	
	int f=0;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			s[f] += to_string(v[i][j])+" ";
		}
		f++;
	}
	sort(s,s+f);
	for(int i=0;i<f;i++){
		cout<<s[i]<<endl;
	}
}
