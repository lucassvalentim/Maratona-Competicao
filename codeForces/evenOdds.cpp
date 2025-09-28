#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ll n, k;
    cin >> n >> k;

    ll qpares = n / 2;
    ll qimpares = (n+1) / 2;

    if(k <= qimpares){
        cout << 1 + (2 * (k - 1)) << endl;
    }else{
        cout << 2 + (2 * (k - qimpares - 1)) << endl;
    }
    return 0;
}