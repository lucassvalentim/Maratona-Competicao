#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout); 

    int n, m, k;
    cin >> n >> m >> k;

    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        int aux = 1;
        while(aux <= k){
            for(char x : s){
                int index = 1;
                while(index <= k){
                    cout << x;
                    index++;
                }
            }
            cout << endl;
            aux++;
        }
    }

    return 0;
}