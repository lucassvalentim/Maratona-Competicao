#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

// vector<int>b(n+1, -1);
// b[0] = 1;
//versao recursiva da solucao abaixo
// int solve(int sum, vector<int>&b){
//     if(sum < 0)
//         return 0;

//     if(b[sum] != -1)
//         return b[sum];
        
//     ll res = 0;
//     for(int x = 1; x <= 6; x++){
//         res += solve(sum - x, b);
//         b[sum] = res;
//     }

//     return b[sum];
// }

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int dice[6] = {1, 2, 3, 4, 5, 6};

    vector<ll>count(n+1, 0);
    count[0] = 1;

    for(int x = 1; x <= n; x++){
        for(int c : dice){
            if(x - c >= 0){
                count[x] += count[x-c];
                count[x] %= 1000000007;
            }
        }
    }

    cout << count[n] << endl;

    return 0;
}