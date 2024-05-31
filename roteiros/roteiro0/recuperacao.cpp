#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    int k = 1;
    while(cin >> n){
        
        vector<int>inteiros(n);

        for(int i = 0; i < n; i++){
            cin >> inteiros[i];
        }

        printf("Instancia %d\n", k);
        
        if(n == 1){
            printf("0\n\n");
            k++;
            continue;
        }

        int soma = inteiros[0];
        int escolhido = 0;

        for(int i = 1; i < n; i++){
            if(soma == inteiros[i]){
                printf("%d\n\n", inteiros[i]);

                break;
            }

            soma += inteiros[i];
        }

        k++;
    }
    return 0;
}