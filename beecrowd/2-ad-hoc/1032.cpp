#include <bits/stdc++.h>
using namespace std;

vector<int> m;

bool eh_primo(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }

    return true;
}

long long solve(int n, vector<int> &m, int i){
    if(n == 1){
        return 0;
    }

    long long a = (solve(n - 1, m, i + 1) + m[i]) % n;
    return a;
}

int main(){

    for(int i = 2; i <= 100000; i++){
        if(eh_primo(i)){
            m.push_back(i);
        }
    }

    int n;
    cin >> n;
    while(n != 0){
        cout << solve(n, m, 0) + 1 << '\n';
        cin >> n;
    }

    return 0;
}