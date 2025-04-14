#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;
    set<ll> numbers;
    
    ll a;
    for(int i = 0; i < n; i++){
        cin >> a; numbers.insert(a);
    }
    cout << numbers.size() << endl;

    return 0;
}