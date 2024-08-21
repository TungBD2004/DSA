#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a(16);
int used[16];
vector<vector<string>> v;
void Try(int i){
	for(int j=0;j<=1;j++){
		used[i]=j;
		if(i==n-1){
			int s=0;
			for(int h=0;h<n;h++){
				if(used[h]){
					s+=a[h];
				}
			}
			if(s % 2==1){
				vector<string> b;
				for(int k=0;k<n;k++){
					if(used[k]){
						string s=to_string(a[k]);
						b.push_back(s);
					}
				}
				sort(b.begin(),b.end());
				reverse(b.begin(),b.end());
				v.push_back(b);
			}
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		Try(0);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
}
