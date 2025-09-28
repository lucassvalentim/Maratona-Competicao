#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool solve(ll x){
    while(x > 0){
        if(x % 10 != 0 && x % 10 != 1){
            return false;
        }

        x /= 10;
    }

    return true;
}

int main(){

    ll n;
    cin >> n;

    ll p = 2;
    ll aux = n;
    while(true){
        aux = n * p;
        if(solve(aux)){
            break;
        }
        p++;
    }
    
    cout << aux << endl;
    return 0;
}