#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;

    ll k, r;
    
    map<int, int>par = {
        {1, 0},
        {3, 1},
        {5, 2},
        {7, 3},
        {9, 4},
    };
    map<int, int>impar = {
        {1, 5},
        {3, 6},
        {5, 7},
        {7, 8},
        {9, 9},
    };

    while(q--){
        cin >> k;

        if(k < 10)
            cout << k << endl;
        else if(k % 10 != 0 && k % 2 != 0){
            int aux = k % 10;
            int sum = 0;
            while(k > 0){
                sum += k % 10;
                k /= 10;
            }
            if(sum % 2 == 0)
                cout << par[aux] << endl;
            else
                cout << impar[aux] << endl;
        }else{
            r = ((k/10) - 1 + 2) / 2;
            cout << r << endl;
        }
    }

    return 0;   
}