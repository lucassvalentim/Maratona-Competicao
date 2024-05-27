#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool comp(pair<int, int>&a, pair<int, int>&b){
    return a.second < b.second;
}

double truncar(double valor) {
    double fator = 100;
    return trunc(valor * fator) / fator;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    int a, c;
    cin >> n;

    if(n == 0)
        return 0;

    ll count = 1;
    while(1){

        double soma_consumo = 0;
        double soma_m3 = 0;

        map<int, int>consumidores;
        for(int i = 0; i < n; i++){
            cin >> a >> c;
            
            soma_consumo += a;
            soma_m3 += c;

            consumidores[c/a] += a;
        }

        cout << fixed << setprecision(2);

        cout << "Cidade# " << count << ":" << endl;
        for(auto x:consumidores)
            cout << x.second << "-" << x.first<< " ";
        cout << endl;
        cout << "Consumo medio: " << truncar(soma_m3 / soma_consumo) << " m3." << endl;
        
        count++;

        cin >> n;
        if(n != 0)
            cout << endl;
        else
            break;
    }
   
    return 0;
}