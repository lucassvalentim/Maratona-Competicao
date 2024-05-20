#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int n;
    cin >> n;

    ll a, b;

    vector<ll>e;
    vector<ll>s;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        e.push_back(a);
        s.push_back(b);        
    }

    sort(e.begin(), e.end());
    sort(s.begin(), s.end());

    queue<ll>f;

    int i = 0;
    int j = 0;

    int maximum = 0;
    while(i < n && j < n){
        if(e[i] < s[j]){
            f.push(e[i]);
            i++;
        }else{
            f.pop();
            j++;
        }

        if(f.size() > maximum)
            maximum = f.size();
    }

    cout << maximum << '\n';
    return 0;
}