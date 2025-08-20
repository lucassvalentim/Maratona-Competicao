#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;

    int atual, menor, maior;
    cin >> atual;
    menor = maior = atual;

    int amazing = 0;
    for(int i = 1; i < n; i++){
        cin >> atual;
        if(atual > maior){
            maior = atual;
            amazing++;
        }else if(atual < menor){
            menor = atual;
            amazing++;
        }
    }

    cout << amazing << endl;
    return 0;
}