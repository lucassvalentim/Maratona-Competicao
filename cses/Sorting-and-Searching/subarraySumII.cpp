#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; ll x;
    cin >> n >> x;

    vector<ll> values(n);
    for(int i = 0; i < n; i++)
        cin >> values[i];

    ll cont = 0;
    ll soma = 0;
    map<ll, int> a;
    a[0]++;
    for(int i = 0; i < n; i++){
        soma += values[i];
        cont += a[soma-x];
        a[soma]++;
    }

    cout << cont << endl;

    return 0;
}