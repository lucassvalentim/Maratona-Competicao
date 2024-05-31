#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve(int sum, vector<int>&coins, vector<int>&memo){
    if(sum < 0)
        return INT_MAX - 1;
     
    if(memo[sum] != -1)
        return memo[sum];

    int best = INT_MAX - 1;
    for(int c: coins){
        best = min(best, solve(sum - c, coins, memo) + 1);
    }
    memo[sum] = best;

    return memo[sum];
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int>coins;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        coins.push_back(a);
    }
    
    //versao iterativa
    vector<int>memo(x+1, INT_MAX - 1);
    memo[0] = 0;
    for(int i = 1; i <= x; i++){
        for(int c : coins){
            if(i - c >= 0){
                memo[i] = min(memo[i], memo[i-c]+1);
            }
        }
    }
    
    if(memo[x] == INT_MAX - 1)
        cout << "-1" << endl;
    else
        cout << memo[x] << endl;

    //versão recursiva
    // vector<int>memo(x+1, -1);
    // memo[0] = 0;
    
    // int res = solve(x, coins, memo);
    // if(res == INT_MAX - 1)
    //     cout << "-1" << endl;
    // else
    //     cout << res << endl;

    return 0;
}