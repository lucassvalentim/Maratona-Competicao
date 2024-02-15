#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int maior = n;
    int pos = 1; 
    int cont = 1;

    while(cin >> n){
        cont++;
        
        if(n > maior){
            maior = n;
            pos = cont;
        }

    }

    cout << maior << endl << pos << endl;
    
    return 0;
}