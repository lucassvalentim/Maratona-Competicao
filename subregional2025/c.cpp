#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int pdois(int x){
    int exp = log2(x);
    return pow(2, exp);
}

int main(){

    int n;
    cin >> n;

    char c;
    int number = 0;
    for(int i = 0; i < n + 1; i++){
        cin >> c;
        if(c == '1'){
            number += pow(2, n - i);
        }
    }

    int cont = 0;
    while(number > 1){
        if(number % 2 == 0){
            number = number >> 1;
        }else{
            int aux = number;
            number = (aux ^ 3) ^ (2*(number - 1));
        }
        cont++;
    }

    cout << cont << endl;
    return 0;
}