#include<bits/stdc++.h>
using namespace std;

int x;
string a,b;
int used[100];
int n;
vector<string> v;
void in(){
	if(b[0]!='0'){
		v.push_back(b);
	}
}
void Try(int i){
	for(int j=0;j<n;j++){
		if(!used[j]){
			b[i]=a[j];
			used[j]=1;
			if(i==n-1){
				in();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>x;
		a=to_string(x);
		n=a.size();
		b.resize(n);
		for(int i=0;i<n;i++){
			used[i]=0;
		}
		Try(0);
		sort(v.begin(),v.end());
		for(auto it:v){
			cout<<it<<endl;
		}
		v.clear();
	}
}
