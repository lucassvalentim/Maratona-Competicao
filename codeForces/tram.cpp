#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    
    vector<pair<int,int>> trens(n);
    for(pair<int,int> &x : trens) cin >> x.first >> x.second;

    int qtd = trens[0].second;
    int maior = qtd;
    for(int i = 1; i < n; i++){
        qtd = (qtd -  trens[i].first) + trens[i].second;
        maior = max(maior, qtd);
    }

    cout << maior << endl;
    return 0;
}