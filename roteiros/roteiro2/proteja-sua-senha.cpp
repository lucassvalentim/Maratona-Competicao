#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;
    
    int teste = 1;
    while(n != 0){
        vector<set<int>>digitos(6);

        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 10; j++){
                digitos[i].insert(j);
            }
        }

        cout << "Teste " << teste << endl;
        while(n--){
            map<char, vector<int>>senha;
            char letra = 'A';

            int x;
            int aux = 0;
            for(int p = 0; p < 10; p++){
                cin >> x;
                senha[letra].push_back(x);
                aux++; 

                if(aux >= 2){
                    aux = 0;
                    letra++;
                }
            }

            char dig;
            for(int w = 0; w < 6; w++){
                vector<int>toremove;
                cin >> dig;
                for(int elem : digitos[w]){
                    if(elem != senha[dig][0] && elem != senha[dig][1]){
                        toremove.push_back(elem);
                    }
                }

                for(int elem: toremove){
                    digitos[w].erase(elem);
                }
            }
        }

        for(int i = 0; i < 6; i++){
            for(int elem : digitos[i]){
                cout << elem << ' ';
            }
        }
        
        cout << endl;
        cout << endl;

        teste++;

        cin >> n;
    }

    return 0;
}