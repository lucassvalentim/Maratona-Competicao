#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main(){

    freopen("lostcow.in", "r", stdin);

    int x, y;
    cin >> x >> y;

    int original = x;
    int oldposition = x;
    int walk = 1;
    int totalDistance = 0;

    while(true){
        oldposition = x;
        x = original;
        x += walk;
        walk *= -2;

        if((oldposition <= y && y <= x) || (x <= y && y <= oldposition)){
            totalDistance += abs(y - oldposition);
            break;
        }

        totalDistance += abs(x - oldposition);
    }

    freopen("lostcow.out", "w", stdout);
    
    cout << totalDistance << endl;
    return 0;
}