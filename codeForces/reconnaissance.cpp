#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    vector<int> soldiers(n + 1);
    for(int i = 0; i < n; i++){
        cin >> soldiers[i];
    }

    soldiers[n] = soldiers[0];

    set<pair<int, int>> diffs;
    for(int i = 0; i < n; i++){
        diffs.insert({abs(soldiers[i] - soldiers[i+1]), i});
    }

    int s1 = (*(diffs.begin())).second;
    int s2 = (s1 + 1) % n;

    cout << s1 + 1 << ' ' << s2 + 1 << endl;
    return 0;
}