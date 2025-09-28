#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n, m;
    cin >> n >> m;

    vector<string> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    vector<vector<int>> beat(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(data[i][j] != 'D'){
                if(data[i][j] == 'W'){
                    beat[i][j] = 1;
                }else{
                    beat[j][i] = 1;
                }
            }
        }
    }

    int x, y;
    for(int q = 0; q < m; q++){
        cin >> x >> y;
        x--; y--;

        ll wining = 0;
        for(int b = 0; b < n; b++){
            if((beat[b][x] && beat[b][y]))
                wining++;
        }
            
        // ll ans = 0;
        // for(int a = 0; a < n; a++){            
        //     if((beat[a][x] && beat[a][y])){
        //         ans += n;
        //     }else{
        //         ans += wining;
        //     }
        // }
        
        cout << (wining * n) + (n-wining) * wining << '\n';
    }
    
    return 0;
}