#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    int n, k;
    cin >> k >> n;

    vector<ll> prefix_sum(k);
    vector<ll> values(n);

    ll x;
    cin >> x;
    prefix_sum[0] = x;
    for(int i = 1; i < k; i++){
        cin >> x;
        prefix_sum[i] = prefix_sum[i-1] + x;
    }

    set<ll> repeated_values;
    for(int i = 0; i < n; i++){
        set<ll> inicial_values;
        cin >> x;
        for(int j = 0; j < k; j++){
            inicial_values.insert(x - prefix_sum[j]);
        }

        if(i == 0){
            repeated_values = inicial_values;
            continue;
        }

        for(auto it = inicial_values.begin(); it != inicial_values.end();){
            if(!repeated_values.count(*it)){
                it = inicial_values.erase(it);
            }else{
                it++;
            }
        }

        repeated_values = inicial_values;
    }

    

    cout << repeated_values.size() << endl;
    return 0;
}