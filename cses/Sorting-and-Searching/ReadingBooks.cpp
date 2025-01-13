#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    
    int n;
    cin >> n;

    ll sum = 0, maior = 0;
    ll x;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        if(x > maior){
            maior = x;
        }
    }
    cout << max(sum, maior * 2) << endl;
    
    return 0;
}