#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<ll>fib;
void fibonacci(ll n){
    ll f1 = 0; ll f2 = 1; ll f3 = 0;
    fib.push_back(0);
    fib.push_back(1);
    while(f3 < n){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        fib.push_back(f3); 
    }
}

int main(){

    ll n; cin >> n;
    fibonacci(n);

    int tam = fib.size();
    for(int i = 0; i < tam; i++){
        if(fib[i] + fib[i] + fib[i] == n){
            cout << fib[i] << ' ' << fib[i] << ' ' << fib[i] << endl;
            return 0;
        }
        for(int j = i+1; j < tam; j++){
            if(fib[j] + fib[j] + fib[j] == n){
                cout << fib[j] << ' ' << fib[j] << ' ' << fib[j] << endl;
                return 0;
            }   
            if(fib[i] + fib[i] + fib[j] == n){
                cout << fib[i] << ' ' << fib[i] << ' ' << fib[j] << endl;
                return 0;
            }
            if(fib[i] + fib[j] + fib[j] == n){
                cout << fib[i] << ' ' << fib[j] << ' ' << fib[j] << endl;
                return 0;
            }
            for(int k = j + 1; k < tam; k++){
                if(fib[i] + fib[j] + fib[k] == n){
                    cout << fib[i] << ' ' << fib[j] << ' ' << fib[k] << endl;
                    return 0;
                }
                if(fib[k] + fib[k] + fib[k] == n){
                    cout << fib[k] << ' ' << fib[k] << ' ' << fib[k] << endl;
                    return 0;
                }
                if(fib[i] + fib[k] + fib[k] == n){
                    cout << fib[i] << ' ' << fib[k] << ' ' << fib[k] << endl;
                    return 0;
                }
                if(fib[j] + fib[k] + fib[k] == n){
                    cout << fib[j] << ' ' << fib[k] << ' ' << fib[k] << endl;
                    return 0;
                }
                if(fib[i] + fib[i] + fib[k] == n){
                    cout << fib[i] << ' ' << fib[i] << ' ' << fib[k] << endl;
                    return 0;
                }
                if(fib[j] + fib[j] + fib[k] == n){
                    cout << fib[j] << ' ' << fib[j] << ' ' << fib[k] << endl;
                    return 0;
                }
            }
        }
    }

    cout << "I'm too stupid to solve this problem" << endl;
    return 0;
}