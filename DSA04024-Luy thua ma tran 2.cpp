#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
long long a[10][10],d[10][10];
int n,k;

void NhanMaTran(long long a[10][10], long long b[10][10]) {
    long long c[10][10] = {};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= MOD;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = c[i][j];
        }
    }
}
void LuyThua(long long a[10][10],int k){
	if(k==1){
		return;
	}
	LuyThua(a,k/2);
	NhanMaTran(a,a);
	if(k%2==1){
		NhanMaTran(a,d);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				d[i][j]=a[i][j];
			}
		}
		long long ans=0;
		LuyThua(a,k);
		for(int i=0;i<n;i++){
			ans=ans+a[i][n-1];
			ans%=MOD;
		}
		cout<<ans<<endl;
	}
	
}
