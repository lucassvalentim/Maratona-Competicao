#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    ll x;
    cin >> n >> x;

    vector<ll> values(n);
    for(int i = 0; i < n; i++)
        cin >> values[i];

    map<ll, pair<int, int>> valuesPosition;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(valuesPosition.count(x - values[i] - values[j])){
                cout << i + 1 << ' ' << j + 1 << ' '
                << valuesPosition[x - values[i] - values[j]].first + 1 << ' '
                << valuesPosition[x - values[i] - values[j]].second + 1 << endl;
                return 0;
            }
        }
        for(int j = 0; j < i; j++){
            valuesPosition[values[i]+values[j]] = {i, j};
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}