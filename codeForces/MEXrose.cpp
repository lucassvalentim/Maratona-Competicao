#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> numbers(n), cont(k, 0);
        int kk = 0;
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            if(numbers[i] == k){
                kk++;
            }

            if(numbers[i] < k){
                cont[numbers[i]]++;
            }
        }

        int ans = 0;
        for(int i = 0; i < k; i++){
            if(!cont[i]){
                ans++;
            }
        }

        cout << max(ans, kk) << endl;
    }
 
    return 0;
}