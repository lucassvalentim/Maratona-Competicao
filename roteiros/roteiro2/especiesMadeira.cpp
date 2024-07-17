#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    //caso de testes
    int n;
    scanf("%d", &n);
    
    //para limpar os dois \n da entrada
    char c;
    scanf("%c", &c);
    scanf("%c", &c);

    //algoritmo
    string arvore;
    while (n--){
        map<string, int>ar;
        float total = 0;

        getline(cin, arvore);
        while(arvore[0] != 0){
            ar[arvore]++;
            total++;
            if(cin.eof())
                break;
            getline(cin, arvore);
        }

        for(auto x : ar){
            cout << x.first << ' ';
            printf("%.4f\n", (x.second / total) * 100);
        }

        if(n > 0)
            printf("\n");
    }
    
    return 0;
}