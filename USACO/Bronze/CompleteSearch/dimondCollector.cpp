#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


int main(){
    freopen("diamond.in", "r", stdin);

    int n, k;
    cin >> n >> k;

    vector<int> dimonds(n);
    for(auto &c : dimonds)
        cin >> c;
    
    int most = 0;
    /*
        A ideia é encontrar o maior subconjunto de diamantes que a diferença
        entre os elementos é no máximo K; Para construir esse subconjunto vamos seguir a ideia que:
        pela propriedade que queremos atingir, o subconjunto tem o comportamento de o menor tamanho possuir
        uma diferença K do maior tamanho, criando um intervalo onde todo o restante dos elementos desse suconjunto 
        pertencerem a esse intervalo.

        Sendo assim. Vamos, toda vez, tornar cada eleemento o menor valor do subconjunto corrente e a partir dele
        consntruir esse subconjunto. No fim, teremos o tamanho dele que é verificado se ele é o maior subconjunto ou não;
    */
    for(auto x : dimonds){
        int count = 0;

        for(auto y : dimonds){
            if(x <= y && y <= x + k) count++; // crio o subconjubto
        }

        most = max(most, count);
    }


    freopen("diamond.out", "w", stdout);

    cout << most << endl;

    return 0;
}