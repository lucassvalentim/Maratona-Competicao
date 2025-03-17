#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


int main(){
    freopen("pails.in", "r", stdin);

    int x, y, m;

    cin >> x >> y >> m;

    int closest = 0;
    for(int first = 0; first <= m; first++){
        if(x * first > m)
            break;
        
        for(int second = 0; second <= m; second++){
            int n = (x * first) + (y * second);
            if(n > m) break;

            closest = max(closest, n);
        }
    }

    freopen("pails.out", "w", stdout);

    cout << closest << endl;

    return 0;
}