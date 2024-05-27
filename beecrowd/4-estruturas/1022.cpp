#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mdc(ll a, ll b){
    if(b == 0) 
        return a;
    else 
        return mdc(b, a % b);
}

int main(){

    int n;
    scanf("%d", &n);

    int a, b;
    char op, c;
    while(n--){
        vector<int>numeros;
        scanf("%d %c %d %c", &a, &c, &b, &op);
        numeros.push_back(a);
        numeros.push_back(b);
        scanf("%d %c %d", &a, &c, &b);
        numeros.push_back(a);
        numeros.push_back(b);

        ll num, dem;
        if(op == '+'){
            num = (numeros[0] * numeros[3]) + (numeros[2] * numeros[1]);
            dem = (numeros[1] * numeros[3]);
        }else if(op == '-'){
            num = (numeros[0] * numeros[3]) - (numeros[2] * numeros[1]);
            dem = (numeros[1] * numeros[3]);
        }
        else if(op == '*'){
            num = (numeros[0] * numeros[2]);
            dem = (numeros[1] * numeros[3]);
        }
        else if(op == '/'){
            num = (numeros[0] * numeros[3]);
            dem = (numeros[1] * numeros[2]);
        }

        ll mdcnum = mdc(abs(num), abs(dem));

        printf("%lld/%lld = ", num, dem);
        if(mdcnum == 1)
            printf("%lld/%lld\n", num, dem);
        else
            printf("%lld/%lld\n", num/mdcnum, dem/mdcnum);
    }
    
    return 0;
}