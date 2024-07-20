#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n, l;
    cin >> n >> l;

    while(n!= 0 and l != 0){
        ll x;
        vector<ll>livres;
        for(int i = 0; i < l; i++){
            cin >> x;
            livres.push_back(x);
        }

        int max;
        int aux = 0;
        for(int i = 0; i < l; i++){
            if(livres[i] + n - 1 > livres[l-1])
                break;
            auto it = upper_bound(livres.begin(), livres.end(), livres[i] + n-1);
            if(it != livres.end()){
                aux = it - (livres.begin() + i);
                if(n - aux < max || i == 0){
                    max = n - aux;
                }
            }
            else if(it == livres.end()){
                aux = l - i;
                if(n - aux < max || i == 0){
                    max = n - aux;
                }
            }
        }

        cout << max << endl;
        cin >> n >> l;
    }

    return 0;
}