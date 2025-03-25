#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> rooms(2*n);
    int soma = 0;
    for(int i = 0; i < n; i++){
        cin >> rooms[i];
        soma += rooms[i];
    }
    for(int i = n; i < 2*n; i++){
        rooms[i] = rooms[i - n];
    }

    int min_distance = INT32_MAX;
    for(int i = 0; i < n; i++){
        int distance = 0;
        int aux_soma = 0;   
        for(int j = i; j < i + n; j++){
            distance += aux_soma * rooms[j];
            aux_soma++;
        }
        min_distance = min(min_distance, distance);
    }

    cout << min_distance << endl;
    return 0;
}   