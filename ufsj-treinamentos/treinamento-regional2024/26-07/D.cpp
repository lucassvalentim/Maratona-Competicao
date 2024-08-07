#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAX = 1e5+10;
vector<int>dist(MAX, -1);

int tamanho = 1;
void dfs(int v, vector<vector<int>> & grafo, vector<bool>&visitados){
    visitados[v] = true;
    for(auto u : grafo[v]){
        if(!visitados[u]){
            cout << string(tamanho++, ' ');
            cout << v << "-" << u << " pathR(G, " << u << ")" << endl;
            visitados[u] = true;
            dfs(u, grafo, visitados);
        }else{
            if(grafo[u][v] == grafo[v][u]){
                cout << string(tamanho++, ' ');
                cout << v << '-' << u << endl;
            }
        }
        tamanho--;
    }
}
int main(){

    int n; cin >> n;

    int caso = 1;
    while(n--){
        int v, e;
        cin >> v >> e;

        vector<vector<int>>grafo(v);
        vector<bool>visitados(v);

        cout << "Caso: " << caso << endl;
        for(int i = 0; i < e; i++){
            int a, b;
            cin >> a >> b;

            grafo[a].push_back(b);
        }

        for(int j = 0; j < v; j++){
            if(!visitados[j]){
                dfs(j, grafo, visitados);
            }
        }

        caso++;
        if(n > 0) cout << endl;
    }

    return 0;
}