#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

set<int> color_up;

void quad(vector<vector<int>> &canvas, int mini, int minj, int maxi, int maxj, int cl){
    for(int i = mini; i <= maxi; i++){
        for(int j = minj; j <= maxj; j++){
            if(canvas[i][j] != cl){
                color_up.insert(canvas[i][j]);
            }
        } 
    }
}

int main(){

    freopen("art.in", "r", stdin);
    freopen("art.out", "w", stdout);

    int n;
    cin >> n;

    vector<vector<int>>canvas(n, vector<int>(n));
    char x;
    set<int> colors_used;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            canvas[i][j] = x - '0';
            if(canvas[i][j] != 0) colors_used.insert(canvas[i][j]);
        }
    }

    for(auto cl : colors_used){
        int mini = -1, minj = -1, maxi = -1, maxj = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(canvas[i][j] == cl){
                    if(mini == -1 || i < mini){
                        mini = i;
                    }

                    if(minj == -1 || j < minj){
                        minj = j;
                    }

                    if(maxi == -1 || i > maxi){
                        maxi = i;
                    }

                    if(maxj == -1 || j > maxj){
                        maxj = j;
                    }
                }
            }
        }   

        quad(canvas, mini, minj, maxi, maxj, cl);
    }

    cout << colors_used.size() - color_up.size() << endl;
    return 0;
}