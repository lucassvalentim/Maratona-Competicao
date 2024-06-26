#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int n;
        cin >> n;
        if(n == 0)
            break;

        int aux;
        cin >> aux;
        if(aux == 0){
            cout << endl;
            continue;
        }
        
        vector<int>numeros(n);
        numeros[0] = aux;
        for(int i = 1; i < n; i++){
            cin >> numeros[i];
        }

        for(auto x : numeros)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}