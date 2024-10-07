#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAX = 1e5+10;
vector<vector<int>>grafo(MAX);
vector<bool>visitados(MAX);
vector<int>dist(MAX, -1);

void dfs(int v){
    visitados[v] = true;
    
    for(auto u : grafo[v]){
        if(!visitados[u]){
            visitados[u] = true;
            dist[u] = dist[v] + 1;
            dfs(u);
        }
    }
}
int main(){

    int n, a, b;
    cin >> n >> a >> b; a--, b--;

    int x, y;
    for(int i = 0; i < n-1; i++){
        cin >> x >> y; x--, y--;

        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    
    dist[a] = 0;
    dfs(a);

    cout << dist[b] << endl;

    return 0;
}