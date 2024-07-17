#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int t, m, n;
    cin >> t;

    string s1, s2;
    while(t--){
        map<string, string>dicionario;
        
        cin >> m >> n;
        
        getline(cin, s1);//pegando o \n que sobra

        //criando o dicionario
        for(int i = 0; i < m; i++){
            getline(cin, s1);
            getline(cin, s2);
            dicionario[s1] = s2;
        }

        //traduzindo a letra da musica
        for(int i = 0; i < n; i++){
            getline(cin, s1);
            istringstream iss(s1);

            while(iss >> s2){
                if(dicionario.count(s2)){
                    cout << dicionario[s2] << ' ';
                }else{
                    cout << s2 << ' ';
                }
            }
            cout << endl;    
        }
    }
    return 0;
}