#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;
    
    int forces[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> forces[i][j];
        }
    }

    vector<int> result(3, 0);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            result[i] += forces[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        if(result[i] != 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}