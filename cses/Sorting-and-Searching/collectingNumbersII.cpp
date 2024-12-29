#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> values(n+1);
    vector<int> pos_values(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> values[i];
        pos_values[values[i]] = i;
    }

    int result = 1;
    for(int i = 2; i <= n; i++){
        result += (pos_values[i] < pos_values[i - 1]);
    }

    set<pair<int,int>> adjacents;
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        
        if(values[l] + 1 <= n)
            adjacents.insert({values[l], values[l]+1});
        if(values[l] - 1 >= 1)
            adjacents.insert({values[l] - 1, values[l]});
        if(values[r] + 1 <= n)
            adjacents.insert({values[r], values[r]+1});
        if(values[r] - 1 >= 1)
            adjacents.insert({values[r] - 1, values[r]});

        for(pair<int, int> adj : adjacents){
            result -= (pos_values[adj.first] > pos_values[adj.second]);
        }

        swap(values[l], values[r]);
        pos_values[values[l]] = l;
        pos_values[values[r]] = r;

        for(pair<int, int> adj : adjacents)
            result += (pos_values[adj.first] > pos_values[adj.second]);
        
        cout << result << endl;
        adjacents.clear();
    }    

    return 0;   
}