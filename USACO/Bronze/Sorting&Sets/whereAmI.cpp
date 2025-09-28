#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n; 
    cin >> n;
    
    string s; 
    cin >> s;

    int tamanho = n;
    for(int i = 1; i <= n; i++){
        set<string> sequence;
        bool valida = true;
        for(int j = 0; j < n - 1; j++){
            string aux = "";
            for(int k = j; k < j + i; k++){
                aux += s[k];
            }
            if(sequence.count(aux)){
                valida = false;
                break;
            }
            sequence.insert(aux);
        }
        if(valida){
            tamanho = i;
            break;
        }
    }
    
    cout << tamanho << endl;
    return 0;
}