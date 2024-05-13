#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;

    int qtd = 0;

    qtd = n / 5;
    n /= 5;

    while(n >= 5){
        qtd += n / 5;
        n /= 5;
    }

    cout << qtd << endl;

    return 0;
}