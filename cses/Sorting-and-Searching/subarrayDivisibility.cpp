#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    int n;
    cin >> n;

    vector<ll> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }

    map<ll, int> dif;
    ll sum = 0, cont = 0;
    dif[sum]++;
    for(int i = 0; i < n; i++){
        sum += values[i];
        cont += dif[sum % n];

        dif[sum]++;
    }

    cout << cont << endl;

    return 0;
}