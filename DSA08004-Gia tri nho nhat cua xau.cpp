#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long ans=0;
		int a[1000]={0};
		for(char i:s){
			a[i]++;
		}
		priority_queue<int> q;
		for(int i:a){
			q.push(i);
		}
		while(n--){
			if(q.empty()){
				break;
			}
			int x=q.top();
			q.pop();
			x--;
			q.push(x);
		}
		while(!q.empty()){
			long long x=q.top();
			q.pop();
			ans+=x*x;
		}
		cout<<ans<<endl;
	}
}
