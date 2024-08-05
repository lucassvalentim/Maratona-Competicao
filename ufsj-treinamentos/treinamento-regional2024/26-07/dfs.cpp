#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

#define MAX 1e3+10

vector<vector<int>>grafo(MAX);
vector<bool>visitados(MAX);

void dfs(int v){
    visitados[v] = true;

    for(auto w : grafo[v]){
        if(!visitados[w]){
            cout << v << "->" << w << endl;
            dfs(w);
        }
    }
}

int main(){

    int n, m, vi; cin >> n >> m >> vi;
    vi--;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b; a--, b--;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    dfs(vi);

    return 0;
}