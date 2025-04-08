#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int verifica(vector<vector<int>> &magic_square){
    vector<int> somal(3);
    vector<int> somac(3);
    int somad = 0;
    for(int i = 0; i < 3; i++){
        somad += magic_square[i][i];
        for(int j = 0; j < 3; j++){
            somal[i] += magic_square[i][j];
            somac[i] += magic_square[j][i];
        }    
    }
    
    for(int i = 0; i < 3; i++){
        somal[i] << ' ' << somac[i] << ' ' << somal[i] << ' ' << somad << ' ' << somac[i] << somad;
    }

    return true;
    
}
int main(){

    vector<vector<int>> magic_square(3, vector<int>(3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> magic_square[i][j];
        }    
    }

    for(int x = 1; x <= 1; x++){
        magic_square[0][0] = x;
        for(int y = 1; y <= 1; y++){
            magic_square[1][1] = y;
            for(int z = 1; z <= 1; z++){
                magic_square[2][2] = z;
                if(verifica(magic_square)){
                    // for(int i = 0; i < 3; i++){
                    //     for(int j = 0; j < 3; j++){
                    //         cout << magic_square[i][j] << ' ';
                    //     }    
                    //     cout << endl;
                    // }

                    return 0;
                }
            }
        }   
    }

    return 0;
}