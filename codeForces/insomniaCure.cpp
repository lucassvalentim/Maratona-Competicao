#include <bits/stdc++.h>
using namespace std;

#define  ll long long
#define endl '\n'

int main(){

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int x;

    int soma = 0;
    for(int i = 1; i <= d; i++){
        if(i % k == 0)
            soma ++;
        else if(i % l == 0)
            soma ++;
        else if(i % m == 0)
            soma ++;
        else if(i % n == 0)
            soma ++;
    }        

    cout << soma << endl;
    return 0;
}