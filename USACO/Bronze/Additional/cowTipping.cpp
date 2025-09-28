#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define  endl '\n'

int result = 0;
void solve(vector<vector<char>> &grid, int x, int y){
    result++;
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= y; j++){
            grid[i][j] = grid[i][j] == '1' ? '0' : '1';
        }
    }

    return;
}

int main(){

    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    char x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i == 0 && j == 0) && grid[n-i-1][n-1-j] == '1'){
                solve(grid, n-i-1, n-1-j);
            }
            
            if(grid[n-i-1][n-1-j] == '1'){
                solve(grid, n-i-1, n-1-j);
            }
            
            if(grid[n-1-j][n-i-1] == '1'){
                solve(grid, n-1-j, n-i-1);
            }
        }
    }

    cout << result << endl;
    return 0;
}