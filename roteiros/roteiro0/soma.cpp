#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a;
    int soma = 0;

    for(int i = 0; i < n; i++){
        cin >> a;
        soma += a;
    }

    cout << soma << '\n';
    return 0;
}