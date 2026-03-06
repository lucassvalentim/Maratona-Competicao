#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    while(n != 0){
        int sob = 0;

        int m = 1;
        while(true){
            for(int i = 1; i < n; i++){
                sob = (sob + m) % i;
            }
            sob = (sob + 1) % n;
            if(sob + 1 == 13){
                cout << m << '\n';
                break;
            }
            m++;
        }

        cin >> n;
    }

    return 0;
}