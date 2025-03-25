#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n;
    cin >> k >> n;

    vector<vector<int>> gym(k, vector<int>(n));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> gym[i][j];
        }
    }

    int result = 0;
    for(int current_num = 1; current_num <= n; current_num++){
        vector<int> verifica(n + 1, 0);
        for(int i = 0; i < k; i++){
            int find = false;
            for(int j = 0; j < n; j++){
                if(find){
                    verifica[gym[i][j]] += 1;
                }else if(gym[i][j] == current_num){
                    find = true;
                }
            }
        }

        for(auto v : verifica){
            if(v == k){
                result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}