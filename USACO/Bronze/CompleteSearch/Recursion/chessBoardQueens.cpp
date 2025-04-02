#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int cont = 0;
vector<vector<char>> chessboard(8, vector<char>(8));
void solve(int y, vector<bool> &column, vector<bool> &diag1,vector<bool> &diag2){
    if(y == 8){
        cont++;
        return;
    }else{
        for(int x = 0; x < 8; x++){
            if(column[x] || diag1[x+y] || diag2[(x-y) + 7] || chessboard[y][x] == '*') continue;
            column[x] = diag1[x+y] = diag2[(x-y) + (8-1)] = true;
            solve(y + 1, column, diag1, diag2);
            column[x] = diag1[x+y] = diag2[(x-y) + (8-1)] = false;
        }
    }
    
    return;
}

int main(){

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> chessboard[i][j];
        }
    }
    
    vector<bool>column(8, false);
    vector<bool>diag1(8, false);
    vector<bool>diag2(8, false);
    solve(0, column, diag1, diag2);

    cout << cont << endl;
    return 0;
}