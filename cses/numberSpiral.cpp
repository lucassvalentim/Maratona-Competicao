#include <bits/stdc++.h>
using namespace std;

int main(){

    long int t;
    scanf("%ld", &t);

    long int x, y;

    while(t--){
        scanf("%ld %ld", &x, &y);        

        if(x == y)
            printf("%ld\n", (x * y) - (x - 1));
        else if(x < y)
            if(y % 2 == 0)
                printf("%ld\n", ((y * y) - (y - 1)) - (y - x));
            else
                printf("%ld\n", ((y * y) - (y - 1)) + (y - x));
        else
            if(x % 2 == 0)
                printf("%ld\n", ((x * x) - (x - 1)) + (x - y));
            else
                printf("%ld\n", ((x * x) - (x - 1)) - (x - y));
    }

    return 0;
}