#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){

    int n; ll x;
    cin >> n >> x;

    vector<ll>values(n);
    for(int  i = 0; i < n; i++){
        cin >> values[i];
    }

    ll sum = 0;
    int cont = 0;

    for(int i = 0, j = 0; j < n; j++){
        sum += values[j];
        while(sum >= x){
            if(sum == x)
                cont++;
            sum -= values[i];
            i++;
        }
    }

    cout << cont << endl;

    return 0;
}