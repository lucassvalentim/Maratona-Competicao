#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    long long a, b;
    long long maior;
    while(t--){
        cin >> a >> b;

        if(a >= b)
            maior = a;
        else
            maior = b;

        if(a == 0 && b != 0 || (a != 0 && b == 0)){
            cout << "NO" << endl;
        }else{
            if((a + b) % 3 == 0 && (2 * abs(a - b)) <= maior)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}