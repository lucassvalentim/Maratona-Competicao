#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<ll> numeros(ll x, ll raio){
    vector<ll>numbers;
    
    int aux = 1;
    while (aux <= raio){
        numbers.push_back(x + aux);
        numbers.push_back(x - aux);
        aux++;
    }
    
    return numbers;
}

int main(){
    
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);

    int n;
    cin >> n;
    
    vector<ll> position(n);
    set<ll> line;
    for(int i = 0; i < n; i++){
        cin >> position[i];
        line.insert(position[i]);
    }

    ll max_elem = 0;
    for(int i = 0; i < n; i++){
        queue<pair<ll, ll>> atingidos;
        set<ll> visitados;
        ll cont = 0;
        atingidos.push({position[i], 1});
        visitados.insert(position[i]);
        cont++;
        while(!atingidos.empty()){
            vector<ll> n_atingidos = numeros(atingidos.front().first, atingidos.front().second);
            for(auto x : n_atingidos){
                if(line.count(x) && !visitados.count(x)){
                    atingidos.push({x, atingidos.front().second + 1});
                    visitados.insert(x);
                    cont++;
                }
            }

            atingidos.pop();
        }

        max_elem = max(cont, max_elem);
    }

    cout << max_elem << endl;
    return 0;
}