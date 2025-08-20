#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n; cin >> n;

    vector<string> ts(n);
    vector<int> t1(n);
    vector<int> t2(n);

    for(int i = 0; i < n; i++){
        cin >> ts[i] >> t1[i] >> t2[i];
    }

    int a = 0; int b = 999999999;
    for(int i = n-1; i >= 0; i--){
        if(ts[i] == "none"){
            a = max(a, t1[i]);
            b = min(b, t2[i]);
        }

        if(ts[i] == "off"){
            a += t1[i];
            b += t2[i];
        }

        if(ts[i] == "on"){
            a -= t2[i];
            b -= t1[i];
            a = max(0, a);
        }
    }

    cout << a << ' ' << b << endl;

    a = 0; b = 999999999;
    for(int i = 0; i < n; i++){
        if(ts[i] == "none"){
            a = max(a, t1[i]);
            b = min(b, t2[i]);
        }

        if(ts[i] == "on"){
            a += t1[i];
            b += t2[i];
        }

        if(ts[i] == "off"){
            a -= t2[i];
            b -= t1[i];
            a = max(0, a);
        }
    }

    cout << a << ' ' << b << endl;
    return 0;
}