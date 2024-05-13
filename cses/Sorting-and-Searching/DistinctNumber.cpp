#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<int>conj;
    ll x;
    for(int i = 0; i < n; i++){
        cin >> x;
        conj.insert(x);
    }

    cout << conj.size() << '\n';
    
    return 0;   
}