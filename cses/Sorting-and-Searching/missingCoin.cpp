#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<ll>coins;
    ll a;
    for(int i = 0; i < n; i++){
        cin >> a;
        coins.push_back(a);
    }

    sort(coins.begin(), coins.end());

    ll sum = 0;
    
    int i = 0;
    while(i < n){
        if(sum + 1 >= coins[i])
            sum += coins[i];
        else
            break;
        i++;
    }

    cout << sum + 1 << endl;
    return 0;
}