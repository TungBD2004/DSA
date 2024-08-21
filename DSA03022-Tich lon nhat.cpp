#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<int> b;
	b.push_back(a[0] *a[1]);
	b.push_back(a[n-1] *a[n-2]);
	b.push_back(a[0] *a[1] * a[n-1]);
	b.push_back(a[n-1] *a[n-2] * a[n-3]);
	sort(b.begin(),b.end());
	cout<<b[3]<<endl;
}
