#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;
    vector<int> weights(2*n);

    for(int &x : weights) cin >> x;

    sort(weights.begin(), weights.end());
    int result = 0;

    int j = 0;
    int i = 0;
    while(j < n - 1){
        result += abs(weights[i+1] - weights[i]);
        i+=2;
        j++;
    }   

    cout << result << endl;
    return 0;
}