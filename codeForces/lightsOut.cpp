#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int grid[5][5];
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            grid[i][j] = 1;
        }
    }

    int x;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cin >> x;
            if(x % 2 != 0){
                if(grid[i][j] == 1)
                    grid[i][j] = 0;
                else if(grid[i][j] == 0)
                    grid[i][j] = 1;

                if(grid[i - 1][j] == 1)
                    grid[i - 1][j] = 0;
                else if(grid[i - 1][j] == 0)
                    grid[i - 1][j] = 1;

                if(grid[i + 1][j] == 1)
                    grid[i + 1][j] = 0;
                else if(grid[i + 1][j] == 0)
                    grid[i + 1][j] = 1;

                if(grid[i][j - 1] == 1)
                    grid[i][j - 1] = 0;
                else if(grid[i][j - 1] == 0)
                    grid[i][j - 1] = 1;
                
                if(grid[i][j + 1] == 1)
                    grid[i][j + 1] = 0;
                else if(grid[i][j + 1] == 0)
                    grid[i][j + 1] = 1;
            }
        }
    }

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cout << grid[i][j];        
        }
        cout << endl;
    }

    return 0;
}