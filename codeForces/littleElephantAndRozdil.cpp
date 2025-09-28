#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int x;
    cin >> x;

    vector<pair<ll, int>> travels(x);
    ll a;
    for(int i = 0; i < x; i++){
        cin >> a;
        travels[i] = {a, i + 1};
    }

    sort(travels.begin(), travels.end());

    if(x == 1){
        cout << 1 << endl;
    }else if(travels[0].first != travels[1].first){
        cout << travels[0].second << endl;
    }else{
        cout << "Still Rozdil" << endl;
    }

    return 0;
}