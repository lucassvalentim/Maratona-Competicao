#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("shuffle.in", "r", stdin);

    int n;
    cin >> n;

    map<int, int> moves;
    int a;
    for(int i = 1; i <= n; i++){
        cin >> a;
        moves[a] = i;
    }

    vector<string> cows(n);
    for(int i = 0; i < n; i++){
        cin >> cows[i];
    }

    vector<string> newCows(n);
    for(int i = 0; i < n; i++){
        int pos = i + 1;
        for(int j = 0; j < 3; j++){
            pos = moves[pos];
        }

        newCows[pos - 1] = cows[i];
    }

    freopen("shuffle.out", "w", stdout);

    for(auto x : newCows){
        cout << x << endl;
    }

    return 0;
}