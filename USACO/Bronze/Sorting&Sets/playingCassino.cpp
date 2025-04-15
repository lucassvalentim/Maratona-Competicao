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

        vector<vector<ll>>cards(n, vector<ll>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> cards[i][j];
            }
        }

        ll ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans += solve(cards[i], cards[j]);     
            }
        }

        cout << ans << endl;
    }

    return 0;
}