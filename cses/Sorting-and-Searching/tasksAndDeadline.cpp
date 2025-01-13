#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    vector<pair<ll, ll>> tasks(n);

    for(int i = 0; i < n; i++){
        cin >> tasks[i].first >> tasks[i].second;
    }

    sort(tasks.begin(), tasks.end());
    
    ll reward = 0;
    ll time = 0;
    for(int i = 0; i < n; i++){
        time += tasks[i].first;
        reward += tasks[i].second-time;
    }   

    cout << reward;

    return 0;
}