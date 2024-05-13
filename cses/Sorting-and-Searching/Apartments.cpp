#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    ll k, a;

    cin >> n >> m >> k;
    
    vector<int> candidatos;
    vector<int> apartamentos;

    for(int i = 0; i < n; i++){
        cin >> a;
        candidatos.push_back(a);
    }

    for(int i = 0; i < m; i++){
        cin >> a;
        apartamentos.push_back(a);
    }    

    sort(candidatos.rbegin(), candidatos.rend());
    sort(apartamentos.rbegin(), apartamentos.rend());

    int i = 0;
    int j = 0;
    ll qtd = 0;
    while(i < n && j < m){
        if(apartamentos[j] <= candidatos[i] + k && apartamentos[j] >= candidatos[i] - k){
            qtd++;
            i++;
            j++;
        }else if(apartamentos[j] < candidatos[i] - k){
            i++;
        }else if(apartamentos[j] > candidatos[i] + k){
            j++;
        }
    } 


    cout << qtd << '\n';
    return 0;   
}