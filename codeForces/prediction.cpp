#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int eh_primo(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n, r;

    cin >> n >> r;
    do{
        n++;
    }while(!eh_primo(n));

    if(n == r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}