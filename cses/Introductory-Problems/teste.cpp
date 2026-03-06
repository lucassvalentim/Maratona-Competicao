#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {

    int t;
    cin >> t;

    ll x, y;
    while(t--){
        cin >> y >> x;
        
        if (x == y){
            cout << (x * x) - (x - 1) << endl;
        }else{
            if (x > y){
                if (x % 2 == 0){
                    cout << (x * x) - (x - 1) - (x - y) << endl;
                }else{
                    cout << (x * x) - (x - 1) + (x - y) << endl;
                }
            }else{
                if (y % 2 == 0){
                    cout << (y * y) - (y - 1) + (y - x) << endl;
                }else{
                    cout << (y * y) - (y - 1) - (y - x) << endl;
                }
            }
        }
    }

    return 0;
}