#include <bits/stdc++.h>
using namespace std;

int main(){

    int r;
    cin >> r;

    int cont = 1;

    while(r != 0){

        int a, b, somaA = 0, somaB = 0;

        for(int i = 0; i < r; i++){
            cin >> a >> b;
            
            somaA += a;
            somaB += b;
        }

        cout << "Teste " << cont++ << '\n';

        if(somaA < somaB){
            cout << "Beto\n\n";
        }else{
            cout << "Aldo\n\n";
        }

        somaA = somaB = 0;

        cin >> r;
    }
    return 0;
}