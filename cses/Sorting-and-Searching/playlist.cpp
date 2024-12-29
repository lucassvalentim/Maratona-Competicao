#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<ll> musics(n);
    for(int i = 0; i < n; i++){
        cin >> musics[i];
    }
    // A ideia é utilizar dois ponteiros para formar uma sequencia
    // maior possivel que não tenha dois elementos repetidos
    // sempre que surgir essa ideia de formar sequencias consecutivas, tentar esse metodo
    int i = 0, j = 0;
    set<int>num;
    int max_length = 0;
    while(i < n && j < n){
        while(j < n && !num.count(musics[j])){
            num.insert(musics[j]);
            max_length = max(max_length, j-i+1);
            j++;
        }

        while(j < n && num.count(musics[j])){
            num.erase(musics[i]);
            i++;
        }
    }

    cout << max_length << endl;    
    return 0;   
}