#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main(){

    freopen("speeding.in", "r", stdin);

    int n, m;
    cin >> n >> m;
    
    vector<int> road(101);

    int a, b;
    int soma = 1;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        for(int  j = soma; j < soma + a; j++){
            road[j] = b;
        }
        soma += a;
    }

    soma = 1;
    int max = 0;
    for(int i = 1; i <= m; i++){
        cin >> a >> b;
        for(int j = soma; j < soma + a; j++){
            if(road[j] < b){
                if(b - road[j] > max){
                    max = b - road[j];
                }
            }
        }
        soma += a;
    }

    freopen("speeding.out", "w", stdout);
    cout << max << endl;

    return 0;
}