#include <bits/stdc++.h>
using namespace std;

int main(){


    long int n;
    scanf("%ld", &n);

    long int somaTotal = (n * (n + 1)) / 2; 

    set<int>a;
    set<int>b;

    if(somaTotal % 2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        
        long somaParcial = 0;
        for(long int i = n; i >= 1; i--){
            if(somaParcial + i <= somaTotal / 2){
                somaParcial += i;
                a.insert(i);
            }else{
                b.insert(i);
            }
        }

        printf("%ld\n", a.size());
        for(int elemento : a)
            printf("%d ", elemento);
        printf("\n");

        printf("%ld\n", b.size());
        for(int elemento : b)
            printf("%d ", elemento);
        printf("\n");
    }
    
    return 0;
}