#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


ll solve(vector<ll> &apples, int index, ll sum1, ll sum2){
    if(index == apples.size()){
        return abs(sum1 - sum2);
    }

    return min(solve(apples, index + 1, sum1 + apples[index], sum2), solve(apples, index + 1, sum1, sum2 + apples[index]));
}

int main(){

    int n;
    cin >> n;

    vector<ll> apples(n);
    for(ll &ap : apples)
        cin >> ap;
    
    cout << solve(apples, 0, 0, 0) << endl;
    return 0;
}