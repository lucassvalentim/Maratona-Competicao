#include <bits/stdc++.h>
using namespace std;

int main(){

    int overflow;
    cin >> overflow;

    int a1, a2;
    char c;

    scanf("%d %c %d", &a1, &c, &a2);

    if(c == '+'){
        if(a1 + a2 > overflow)
            cout << "OVERFLOW\n";
        else
            cout << "OK\n";
    }
    else{
        if(a1 * a2 > overflow)
            cout << "OVERFLOW\n";
        else
            cout << "OK\n";
    }
    return 0;
}