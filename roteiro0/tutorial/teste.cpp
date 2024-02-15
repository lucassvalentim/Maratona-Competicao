#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 100000 //10^5 elementos será o tamanho máximo do vetor
#define MOD 1300031

int main () {
    int A[MAX];  //não será necessário alocar a memória dinâmicamente
    int t, n;
    scanf("%d", &t);

    long long int p = 0;
    while (t--){
        scanf("%d", &n);
        for (int i = 0; i < n; ++i){
             scanf("%d", &A[i]);
            p += A[i];
        }
    }

    long long int soma = 0;

    for(int i = 1; i < n; i++){
        soma += A[i] * p;
        p = p - A[i];
    }
    
    return 0;
}