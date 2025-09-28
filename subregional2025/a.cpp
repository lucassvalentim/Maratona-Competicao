#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

#define MAXM 1010

int v[MAXM];
int n, m;

int main(){

    cin >> n >> m;

    int x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            v[j] = max(v[j], x);
        }
    }

    ll resp = 0;
    for(int i = 0; i < m; i++){
        resp += v[i];
    }

    cout << resp << endl;
    return 0;
}