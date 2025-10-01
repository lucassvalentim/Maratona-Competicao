#include <bits/stdc++.h>
using namespace std;


bool dfs(vector<vector<int>> adj, int i, int v, vector<bool> visitado){
    visitado[v] = true;
    for(auto edge : adj[v]){
        if(edge == i){
            return true;
        }
        if(!visitado[edge]){
            if(dfs(adj, i, edge, visitado)){
                return true;
            }
            visitado[edge] = false;
        }
    }
    
    return false;
}

int main(){
    
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n;
    cin >> n;
    
    int a, b;
    vector<vector<int>> adj(n);
    for(int i = 0; i < n - 1; i++){
        cin >> a >> b;
        a--; b--;
        
        adj[a].push_back(b);
    }

    vector<bool> visitados(n, false);

    for(int i = 0; i < n; i++){
        bool is_possible = true;
        for(int v = 0; v < n; v++){
            if(v != i && !dfs(adj, i, v,visitados)){
                is_possible = false;
            }
        }

        if(is_possible){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}