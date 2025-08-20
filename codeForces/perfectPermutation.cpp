#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;

    if(n % 2 != 0){cout << -1 << endl; return 0;}

    for(int i = 2; i <= n; i+=2){
        cout << i << ' ' << i - 1 << ' ';
    }
    cout << endl;
    
    return 0;
}