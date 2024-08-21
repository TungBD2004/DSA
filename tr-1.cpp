#include<iostream>
using namespace std;

int main(){
	freopen("DT.INP","r",stdin);
	freopen("DT.out","w",stdout);
	int t;
	cin>>t;
	if(t == 1){
		int n;
		cin>>n;
		int a[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		int b[n+1][3]={0};
		int k=1;
		int c=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j] == 1){
					b[k][1]++;
				}
				if(a[j][i] == 1){
					b[k][2]++;
				}
			}
			k++;
		}
		for(int i=1;i<=n;i++){
			for(int j=2;j>=1;j--){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	if(t == 2){
		int n;
		cin>>n;
		int a[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		int dem=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]==1){
					dem++;
				}
			}
		}
		int b[n+1][dem];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=dem;j++){
				b[i][j]=0;		
			}
		}
		int f=1;
		cout<<n<<" "<<dem-1<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j] == 1){
					b[i][f]=1;
					b[j][f]=-1;
					f++;
				}
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<dem;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
