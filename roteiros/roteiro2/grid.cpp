#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while(cin >> n){
        vector<int>largada(n + 1);
        vector<int>mapa(n + 1);
    
        for(int i = 1; i <= n; i++){
            cin >> largada[i];
        }

        int x;
        for(int i = 1; i <=  n; i++){
            cin >> x;
            mapa[x] = i;
        }

        int aux;
        int cont = 0;
        for(int i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                if(mapa[largada[i]] > mapa[largada[j]]){
                    aux = largada[i];
                    largada[i] = largada[j];
                    largada[j] = aux;
                    cont++;
                }
            }
        }
        cout << cont << endl;
    }

    return 0;
}