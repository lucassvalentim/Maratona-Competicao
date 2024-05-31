#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int cont = 1;

    while(n != 0){

        int a, b;
        string nome1, nome2;

        cin >> nome1 >> nome2;

        cout << "Teste " << cont++ << '\n';
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            
            if((a + b) % 2 == 0){
                cout << nome1 << endl;
            }else{
                cout << nome2 << endl;
            }
        }

        cout << '\n';
        
        cin >> n;
    }
    return 0;
}