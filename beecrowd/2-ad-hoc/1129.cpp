#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<char>letras = {'A', 'B', 'C', 'D', 'E'};
    
    int n, x, res;
    while(cin >> n){
        int j = n;
        while(j--){
            int aux = 0;
            for(int i = 0; i < 5; i++){
                cin >> x;
                if(x <= 127){
                    res = i;
                    aux++;
                }
            }
            if(aux == 1)
                cout << letras[res] << endl;
            else
                cout << '*' << endl;
        }
    }

    return 0;
}