#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll solve(vector<ll> &a, vector<ll> &b){
    ll sum = 0;
    for(int i = 0; i < a.size(); i++){
        sum += abs(a[i] - b[i]);
    }
    return sum;
}

int main(){

    int t; cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>>cards(m, vector<ll>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> cards[j][i];
            }
        }

        for(vector<ll> &x : cards){
            sort(x.rbegin(), x.rend());
        }

        ll ans = 0;
        for(vector<ll> &x : cards){
            ll pos = 0, neg = 0, npos = x.size() - 1, nneg = 0;
            for(ll &y : x){
                pos += y * npos;
                neg += y * nneg;
                npos--;
                nneg++;
            }
            ans += pos - neg;
        }
        cout << ans << endl;
    }

    return 0;
}