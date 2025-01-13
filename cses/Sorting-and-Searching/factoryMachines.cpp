#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ll n, t;
    cin >> n >> t;
    vector<ll> machines(n);
    for(int i = 0; i < n; i++){
        cin >> machines[i];
    }

    ll low = 0, high = 1e18, answer = 1e18;
    while(low <= high){
        ll mid = (low + high) / 2;

        ll products = 0;
        for(int i = 0; i < n; i++){
            products += min(mid/machines[i], (ll)1e9);
        }

        if(products >= t){
            if(mid < answer)
                answer = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}