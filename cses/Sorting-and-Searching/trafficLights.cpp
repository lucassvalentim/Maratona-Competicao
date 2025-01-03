#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x, n, p;
    cin >> x >> n;

    set<ll> posicao;
    multiset<ll> tamanho;
    
    posicao.insert(0);
    posicao.insert(x);

    tamanho.insert(x);
    for(int i = 0; i < n; i++){
        cin >> p;
        posicao.insert(p);
        int ant = *prev(posicao.find(p));
        int prox = *next(posicao.find(p));

        tamanho.erase(tamanho.find(prox - ant));
        tamanho.insert(prox - p);
        tamanho.insert(p - ant);

        cout << *(tamanho.rbegin()) << ' ';
    }
    cout << endl;
    
    return 0;
}