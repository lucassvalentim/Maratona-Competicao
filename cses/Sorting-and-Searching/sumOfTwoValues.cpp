#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;

    vector<ll>num;
    map<int,vector<int>> index;

    ll a;
    for(int i = 0; i < n; i++){
        cin >> a;
        num.push_back(a);
        index[a].push_back(i);
    }

    sort(num.begin(), num.end());

    int i = 0;
    int j = n - 1;  

    while(i < j){
        if(num[i] + num[j] < x){
            i++;
        }
        else if(num[i] + num[j] > x){
            j--;
        }
        else{
            cout << index[num[i]].front() + 1 << " " << index[num[j]].back() + 1 << '\n';
            return 0;
        }
    }
    
    cout << "IMPOSSIBLE\n";

    return 0;
}