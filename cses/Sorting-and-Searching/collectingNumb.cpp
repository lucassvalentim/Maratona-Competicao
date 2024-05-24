#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int x;
    vector<int>pos(n + 1);
    for(int i = 0;i < n; i++){
        cin >> x;
        pos[x] = i;
    }

    int rounds = 1;
    for(int i = 1; i < n + 1; i++){
        if(pos[i] < pos[i - 1])
            rounds++;
    }

    cout << rounds << endl;
    return 0;
}