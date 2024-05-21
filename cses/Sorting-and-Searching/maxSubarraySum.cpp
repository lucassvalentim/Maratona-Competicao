#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<ll>num;
    ll a;

    for(int i = 0; i < n; i++){
        cin >> a;
        num.push_back(a);
    }

    ll max_sum = num[0];
    ll sum  = num[0];
    for(int i = 1; i < n; i++){
        sum = max(num[i], sum + num[i]);
        max_sum = max(sum, max_sum);
    }

    cout << max_sum << '\n';
    return 0;
}