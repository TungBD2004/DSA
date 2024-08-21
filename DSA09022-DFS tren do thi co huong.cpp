// https://code.ptit.edu.vn/student/question/DSA09004
// DFS TRÊN Ð? TH? VÔ HU?NG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;

void dfs(int u) {
    cout<<u<<" ";
    vs[u]=true;
    for(int v:G[u]){
    	if(!vs[v]){
    		dfs(v);
		}
	}
}

void testCase() {
    cin >> V >> E >> u;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) {
        cin >> x >> y;
        G[x].push_back(y);
    }
    dfs(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
