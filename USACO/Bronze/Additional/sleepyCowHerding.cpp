#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    ll a, b, c;

    cin >> a >> b >> c;

    ll dif1 = abs(a-b) - 1;
    ll dif2 = abs(b-c) - 1;

    if(dif1 == 0 && dif2 == 0){
        cout << 0 << endl;
        cout << 0 << endl;
    }else if((dif1 == 0 && dif2 == 1) && (dif2 == 0 && dif1 == 1)){
        cout << 1 << endl;
        cout << 1 << endl;
    }else if((dif1 == 1 && dif2 == 1)){
        cout << 1 << endl;
        cout << 2 << endl;
    }else if((dif1 == 1 && dif2 > 1) || (dif2 == 1 && dif1 > 1)){
        cout << 1 << endl;
        cout << max(dif1, dif2) << endl;
    }else{
        cout << 2 << endl;
        cout << max(dif1, dif2) << endl;
    }

    return 0;
}