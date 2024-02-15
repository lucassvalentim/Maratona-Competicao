#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int fatorial = 1;
    for(int i = n; i > 0; i--){
        fatorial *= i;
    }

    cout << fatorial << '\n';
    return 0;
}