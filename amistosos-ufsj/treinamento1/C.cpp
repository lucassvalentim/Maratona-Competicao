#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(auto i = l; i < r; ++i)

int n, p;
vector<vector<int>> adj;
vector<bool> vis;
vector<long> ans;

void dfs(int u)
{
    if(vis[u]) return;
    vis[u] = true;
    ans[u] = 0;
    for(int v : adj[u]) {
        dfs(v);
        ans[u] += ans[v]+1;
    }
}

int main()
{
    cin >> n;
    ans = vector<long>(n+1);
    adj = vector<vector<int>>(n+1, vector<int>());
    vis = vector<bool>(n+1,false);
    FOR(i,2,n+1) {
        cin >> p;
        adj[p].push_back(i);
    }

    dfs(1);
    FOR(i,1,n+1) cout << ans[i] << " ";
    cout << endl;

    return 0;
}
