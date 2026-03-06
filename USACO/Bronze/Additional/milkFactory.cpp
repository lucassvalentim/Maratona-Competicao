#include <bits/stdc++.h>
using namespace std;


// bool dfs(vector<vector<int>> adj, int i, int v, vector<bool> visitado){
//     visitado[v] = true;
//     for(auto edge : adj[v]){
//         if(edge == i){
//             return true;
//         }
//         if(!visitado[edge]){
//             if(dfs(adj, i, edge, visitado)){
//                 return true;
//             }
//             visitado[edge] = false;
//         }
//     }
    
//     return false;
// }

int main(){
    
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n;
    cin >> n;
    
    int a, b;
    vector<int> outgoin(n);
    for(int i = 0; i < n - 1; i++){
        cin >> a >> b;
        a--; b--;
        
        outgoin[a]++;
    }

    vector<int> possibles;
    for(int i = 0; i < n; i++){
        if(outgoin[i] == 0)
            possibles.push_back(i + 1);
    }

    int result = possibles.size() == 1 ? possibles[0] : - 1;

    cout << result << endl;

    return 0;
}