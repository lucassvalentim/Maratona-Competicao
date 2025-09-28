#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> numbers(n);
        int quantk = 0;
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            if(numbers[i] == k) quantk++;
            se.insert(numbers[i]);
        }
 
        int mex = 0;
        for(auto s : se){
            if(s == mex) mex++;
            else break;
        }
        if(mex < k){
            cout << max(quantk, abs(mex - k)) << endl;
        }else if(mex > k){
            cout << quantk << endl;
        }else{
            cout << 0 << endl;
        }
    }
 
    return 0;
}