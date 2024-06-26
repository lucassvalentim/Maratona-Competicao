#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int binaryseach(vector<ll> &v, ll x, int n){
    int esq = 0;
    int dir = n - 1;
    int meio;
    while(esq < dir){
        meio = (esq+dir)/2;
        if(v[meio] < x)
            esq = meio + 1;
        else
            dir = meio;
    }

    if(v[esq] == x)
        return esq;
    else
        return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<ll>num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    ll x;
    for(int i = 0; i < q; i++){
        cin >> x;
        cout << binaryseach(num, x, n) << endl;
    }
    return 0;
}