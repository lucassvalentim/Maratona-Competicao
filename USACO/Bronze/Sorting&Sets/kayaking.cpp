#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;
    
    vector<int> weights(2*n);
    for(int &x : weights) cin >> x;

    sort(weights.begin(), weights.end());

    int ans = 1e9;
    for(int i = 0; i < weights.size(); i++){
        for(int j = i + 1; j < weights.size(); j++){

            vector<int> s;
            for(int k = 0; k < weights.size(); k++){
                if(k != i && k != j){
                    s.push_back(weights[k]);
                }
            }

            int temp = 0;
            for(int k = 0; k < s.size(); k += 2){
                temp += abs(s[k+1] - s[k]);
            }

            ans = min(ans, temp);
        }
    }

    cout << ans << endl;
    return 0;
}