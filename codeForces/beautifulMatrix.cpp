#include <bits/stdc++.h>
using namespace std;
#define ll endl
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(NULL);

    int r, c, x;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> x;
            if(x == 1){
                r = i;
                c = j;
            }
        }
    }
    
    int soma = abs(r - 3) + abs(c - 3);
    cout << soma << endl;

    return 0;
}