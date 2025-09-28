#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if(c > b || d < a){
        cout << abs(a - b) + abs(c - d) << endl;
    }else{
        cout << max(b, d) - min(a, c) << endl;
    }
    
    return 0;
}