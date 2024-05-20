#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int n, m;
    cin >> n >> m;

    multiset<int>tickets;
    ll x;
    for(int i = 0; i < n; i++){
        cin >> x; tickets.insert(x);
    }

    for(int i = 0; i < m; i++){
        cin >> x; auto it = tickets.upper_bound(x);

        if(it == tickets.begin()){
            cout << -1 << '\n';
        }
        else{
            cout << *(--it) << '\n';
            tickets.erase(it);
        }
    }


    return 0;
}