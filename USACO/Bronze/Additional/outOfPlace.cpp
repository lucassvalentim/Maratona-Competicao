#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> cows(n);
    for(int i = 0; i < n; i++){
        cin >> cows[i];
    }

    vector<int> cows_sorted(cows);
    sort(cows_sorted.begin(), cows_sorted.end());

    int diff = 0;
    for(int i = 0; i < n; i++){
        if(cows[i] != cows_sorted[i])
            diff++;
    }

    cout << diff - 1 << endl;
    
    return 0;
}