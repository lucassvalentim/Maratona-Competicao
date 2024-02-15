#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, r;

    while(cin >> n >> r){
        vector<int>mn(n);
        vector<int>mr(r);

        for(int i = 0; i < r; i++){
            cin >> mr[i];
        }

        for(int i = 0; i < n; i++){
            mn[i] = i + 1;
        }

        if(n == r){
            printf("*\n");
            continue;
        }

        int voltou = 0;    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < r; j++){
                if(mn[i] == mr[j]){
                    voltou = 1;
                    break;
                }
            }

            if(!voltou){
                printf("%d ", mn[i]);
            }

            voltou = 0;
        }

        printf("\n");
    }

    return 0;
}