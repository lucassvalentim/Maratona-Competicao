#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int d = 0;

    long int result;
    scanf("%d", &n);
    for(long int k = 1; k <= n; k++){
        if(k == 1){
            printf("0\n");
            continue;
        } 

        result = ((((k * k)*((k *k) - 1)) / 2)) - ((k + (k - 2)) * d);

        printf("%ld\n", result);
        d += 2;
    }

    return 0;
}