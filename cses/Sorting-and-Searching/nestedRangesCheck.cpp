#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct range{
    ll l, r, index;

    bool operator < (const range &other) const{
        if(l == other.l){
            return r > other.r;
        }
        return l < other.l;
    }
};


int main(){

    int n;
    cin >> n;

    vector<range> ranges(n);
    vector<bool> contain(n);
    vector<bool> contained(n);

    for(int i = 0; i < n; i++){
        cin >> ranges[i].l;
        cin >> ranges[i].r;
        ranges[i].index = i;
    }
    
    sort(ranges.begin(), ranges.end());

    ll maxR = 0;
    for(int i = 0; i < n; i++){
        if(ranges[i].r <= maxR)
            contained[ranges[i].index] = true;
        maxR = max(maxR, ranges[i].r);
    }

    ll minR = 1e10;
    for(int i = n-1; i >= 0; i--){
        if(ranges[i].r >= minR)
            contain[ranges[i].index] = true;
        minR = min(minR, ranges[i].r);
    }

    for(auto x : contain)
        cout << x << ' ';
    cout << endl;

    for(auto x : contained)
        cout << x << ' ';
    cout << endl;
    return 0;
}