#include<bits/stdc++.h>
using namespace std;
int n,k;
string a[10],b[10];
int used[10];
int x[10];
int ans;

void tinh(){
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			b[i][j]=a[i][x[j]];
		}
	}
	sort(b,b+n);
	
	int Max=stoi(b[n-1]),Min=stoi(b[0]);
	ans=min(ans,Max-Min);
}
void Try(int i){
	for(int j=0;j<k;j++){
		if(!used[j]){
			used[j]=1;
			x[i]=j;
			if(i==k-1){
				tinh();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}


int main(){
	cin>>n>>k;
	ans = INT_MAX;
    memset(used, 0, sizeof(used));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
    cout<<ans;
}
