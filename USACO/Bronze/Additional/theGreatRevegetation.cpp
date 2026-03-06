#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<set<int>> adj(101);
vector<int> pos(101, 0);

int n, m;

void solve(int s){
    if(s > n){
        return;
    }

    for(int bucket = pos[s] + 1; bucket <= 4; bucket++){
        bool is_possible = true;
        for(auto u : adj[s]){
            if(pos[u] == bucket){
                is_possible = false;
                break;
            }
        }
        
        if(is_possible){
            pos[s] = bucket;
            return solve(s + 1);
        }
    }
}

int main(){

    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
    }

    solve(1);
    for(int i = 1; i<=n; i++){
        cout << pos[i];
    }
    cout << endl;

    return 0;
}