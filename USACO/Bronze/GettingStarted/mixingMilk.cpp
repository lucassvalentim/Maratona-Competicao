#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("mixmilk.in", "r", stdin);

    vector<pair<ll, ll>> buckets(3);
    for(int i = 0; i < 3; i++){
        cin >> buckets[i].first;
        cin >> buckets[i].second;
    }

    int j = 0;
    int k = j + 1;
    for(int i = 0; i < 100; i++){
        ll soma = buckets[j].second + buckets[k].second;
        if(soma <= buckets[k].first){
            buckets[j].second = 0;
            buckets[k].second = soma;
        }else{
            buckets[j].second = abs(buckets[j].second - abs(buckets[k].first - buckets[k].second));
            buckets[k].second = buckets[k].first;
        }


        j = (j+1) % 3;
        k = (j+1) % 3;
    }

    freopen("mixmilk.out", "w", stdout);
    for(auto x : buckets)
        cout << x.second << endl;


    return 0;
}