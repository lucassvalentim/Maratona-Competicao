#include <bits/stdc++.h>
using namespace std;


int posicao(char b36[36], char x){
    for(int i = 0; i < 36; i++){
        if(x == b36[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    char base36[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                     'U', 'V', 'W', 'X', 'Y', 'Z'};
                     
    string a, b;

    cin >> a >> b;

    while(a != "0" && b != "0"){

        int tamA = a.size();
        int tamB = b.size();
        
        int posA;
        int posB;
        int resultado;
        if(tamA == tamB){
            for(int i = 0; i < tamA; i++){
                posA = posicao(base36, a[i]);
                posB = posicao(base36, b[i]);

                resultado = (posA + posB) % 36;

                printf("%c", base36[resultado]);
            }

            printf("\n");
        }

        cin >> a >> b;

    }
    return 0;
}