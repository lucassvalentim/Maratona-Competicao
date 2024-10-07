#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAX = 1e5+10;
vector<vector<int>>g(MAX);
vector<bool>vis(MAX);
vector<int>dist(MAX, -1);

void bfs(int v){
    queue<int>f;
    f.push(v);
    vis[v] = true;
    dist[v] = 0;
    int result = 0;
    while(!f.empty()){
        int va = f.front();
        f.pop();        
        for(auto u : g[va]){
            if(!vis[u]){
                f.push(u);
                vis[u] = true;
                dist[u] = dist[va] + 1;
            }
        }
        result ++;
    }
}

int main(){

    int n, m, vi;
    cin >> n >> m >> vi;vi--;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b; a--, b--;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(vi);
    cout << dist[0] << endl;
    return 0;
}