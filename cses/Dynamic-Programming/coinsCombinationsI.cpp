#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    int a;
    vector<int>coins;
    for(int i = 0; i < n; i++){
        cin >> a;
        coins.push_back(a);
    }

    vector<ll>count(x+1, 0);
    count[0] = 1;

    for(int i = 1; i <= x; i++){
        for(int c : coins){
            if(i - c >= 0){
                count[i] += count[i-c];
                count[i] %= 1000000007;
            }
        }
    }

    cout << count[x] << endl;

    return 0;
}