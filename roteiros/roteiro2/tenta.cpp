#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    ll x;
    while(n != 0){
        vector<int>num(n);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        do{
            for(auto x : num)
                cout << x << ' ';
            cout << endl;
        }while(next_permutation(num.begin(), num.end()));

        cin >> n;
        
        if(n!=0)
            cout << endl;
    }

    return 0;
}