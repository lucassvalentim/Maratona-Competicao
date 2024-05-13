#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    if(n == 1){
        printf("1\n");
    }
    else if(n <= 3 && n != 1){
        printf("NO SOLUTION\n");
    }
    else if(n == 4){
        printf("2 4 1 3\n");
    }
    else{
        for(int i = 2; i <= n; i += 2){
            printf("%d ", i);
        }
        
        for(int i = 1; i <= n; i += 2){
            if(n % 2 == 0 && i == n - 1){
                printf("%d\n", i);

            }else if((n % 2 != 0 && i == n)){
                printf("%d\n", i);
            }
            else{
                printf("%d ", i);
            }
        }
    }


    return 0;
}