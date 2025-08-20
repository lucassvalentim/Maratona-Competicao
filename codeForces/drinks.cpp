#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;

    double soma = 0;
    int a;
    for(int i = 0; i < n; i++){
        cin  >> a;
        soma += a;
    }

    double resultado = (soma/n);
    printf("%.12lf\n", resultado); 

    return 0;
}