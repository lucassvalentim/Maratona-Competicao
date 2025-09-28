#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve(int a1, int an, int n){
    return ((a1 + an) * n) / 2;
}

int main(){

    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    int k, n;
    cin >> k >> n;

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        int time = 1, v = 1, pos = 1;
        while(pos < k){
            v++;
            if(v <= x){
                pos+=v;
                time++;
            }else{
                int diff = k - pos;
                int aux = solve(v, x, v-x + 1);
                if(aux <= diff){
                    pos+=v;
                    time++;
                }else{
                    v-=2;
                }
            }

        }
        cout << time << '\n';
    }
    return 0;
}