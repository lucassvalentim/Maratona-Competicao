#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int x, y, z;
    cin >> x >> y >> z;

    int a = sqrt(x*y / z);
    int b = sqrt(x*z / y);
    int c = sqrt(z*y / x);

    cout << (a*4) + (b*4) + (c*4) << endl;
    return 0;
}