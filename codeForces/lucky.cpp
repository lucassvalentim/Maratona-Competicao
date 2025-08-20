#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    ll soma = 0;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            soma++;
        }
    }

    string resultado = to_string(soma);
    for(ll i = 0; i < resultado.size(); i++){
        if(resultado[i] != '7' && resultado[i] != '4'){
            cout << "NO" << endl;
            return 0;
        }
    } 

    cout << "YES" << endl;
    return 0;
}