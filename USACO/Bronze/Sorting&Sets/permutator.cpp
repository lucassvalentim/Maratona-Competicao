#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>a(n);
    vector<int>b(n);

    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    vector<int> a_aux = a;
    vector<int> b_aux = b;

    sort(a_aux.begin(), a_aux.end());
    sort(b_aux.rbegin(), b_aux.rend());
   
    map<int, int> tabela;

    for(int i = 0; i < n; i++){
        if(i == n-1){
            tabela[a_aux[i]] = b_aux[i];
            break;
        }
        if((b_aux[i] - a_aux[i]) < (b_aux[i+1] - a_aux[i])){
            swap(b_aux[i], b_aux[i+1]);
        }
        tabela[a_aux[i]] = b_aux[i];
    }
    
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                soma += a[k] * tabela[a[k]];
            }
        }
    }
    cout << soma << endl;
    return 0;
}
