#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;

    ll k; cin >> k;

    vector<ll> days(n);
    for(ll &x : days){
        cin >> x;
    }

    ll d1 = days[0];
    ll custo = k + 1;
    ll result = 0;
    for(int i = 1; i < n; i++){
        if(abs(days[i] - d1) + 1 + k <= custo + (1 + k)){
            custo = abs(days[i] - d1) + 1 + k;
            continue;
        }else{
            result += custo;
            d1 = days[i];
            custo = k + 1;
        }
    }

    result += custo;
    cout << result << endl; 
    
    return 0;
}