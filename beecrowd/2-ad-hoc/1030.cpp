#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    if(n == 1) 
        return 0;
    
    return (solve(n-1, k) + k) % n;
}

int main(){
    int t;
    cin >> t;

    for(int i = 1; i<=t; i++){
        int n, k;
        cin >> n >> k;

        cout << "Case " << i << ": " << solve(n, k) + 1 << endl;
    }
    return 0;
}