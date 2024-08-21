#include<bits/stdc++.h>
using namespace std;
int n,k;
bool ok=false;
void Try(int giatri,int tong,vector<int> a,int b[]){
	if(tong == k){
		ok=true;
		cout << "[";
        for (int i = 0; i < a.size() ; ++i) {
            cout << a[i];
            if(i!=a.size()-1){
            	cout<<" ";
			}
        }
        cout << "]";
	}
	for(int i=0;i<n;i++){
		if(giatri<=b[i] && tong+b[i] <= k){
			a.push_back(b[i]);
			Try(b[i],tong+b[i],a,b);
			a.pop_back();
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		Try(1,0,{},a);
		if(!ok){
			cout<<"-1";
		}
		cout<<endl;
	}
}
