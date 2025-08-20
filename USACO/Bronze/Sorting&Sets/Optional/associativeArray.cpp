#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int q; cin >> q;

    int type;
    ll k, v;

    map<ll, ll> table;
    while(q--){
        cin >> type;
        if(type == 0){
            cin >> k >> v;
            table[k] = v;
        }else{
            cin >> k;
            if(table.count(k)){
                cout << table[k] << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }

    return 0;
}