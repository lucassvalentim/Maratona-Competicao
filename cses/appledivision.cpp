#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mi = LONG_LONG_MAX;

//gera todas as possibilidades de ter os 2 conjuntos
void solve(int i, int n, ll sum1, ll sum2, vector<int> &v){
    if(i == n){
        mi = min(mi, abs(sum1 - sum2));
        return;
    }

    solve(i + 1, n, sum1 + v[i], sum2, v);
    solve(i + 1, n, sum1, sum2 + v[i], v);
}

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> pesos(n);
    for(int i = 0; i < n; i++){
        cin >> pesos[i];
    }


    solve(0, n, 0, 0, pesos);

    cout << mi << endl;

    return 0;   
}