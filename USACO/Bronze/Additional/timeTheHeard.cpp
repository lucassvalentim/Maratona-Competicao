#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);


    int n;
    cin >> n;

    vector<int> counter(n);
    for(int &x : counter)
        cin >> x;

    counter[0] = 0;
    for(int i = n - 1; i >= 1; i--){
        if(counter[i] == 0 || counter[i] == -1)
            continue;
        
        if(counter[i - 1] == -1){
            counter[i - 1] = counter[i] - 1;
        } else if(counter[i - 1] != counter[i] - 1){
            cout << -1 << endl;
            return 0;
        }
    }

    vector<int> zeros_ones(2, 0);
    for(int i = 0; i < n; i++){
        if(counter[i] == 0){
            zeros_ones[0]++;
        }else if(counter[i] == -1){
            zeros_ones[1]++;
        }
    }

    cout << zeros_ones[0] << ' ' << zeros_ones[0] + zeros_ones[1] << endl;

    return 0;
}