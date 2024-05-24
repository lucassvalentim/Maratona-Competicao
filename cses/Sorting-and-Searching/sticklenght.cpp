#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int>sticks;
    ll a;
    for(int i = 0; i < n; i++){
        cin >> a;
        sticks.push_back(a);
    }

    sort(sticks.begin(), sticks.end());

    ll middle = sticks[n / 2];
    
    ll sum = 0;
    for(auto x: sticks)
        sum += abs(x - middle);

    cout << sum << endl;
    return 0;
}