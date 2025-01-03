#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define endl '\n'

// Definindo um ordered_multiset
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset_less;
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset_greater;

struct range{
    ll l, r, index;
    
    bool operator < (const range &other) const {
        if(l == other.l){
            return r > other.r;
        }
        return l < other.l;
    }
};

int main() {
    
    int n;
    cin >> n;

    vector<range> ranges(n);
    vector<int> contain(n);
    vector<int> contained(n);
    for(int i = 0; i < n; i++){
        cin >> ranges[i].l;
        cin >> ranges[i].r;
        ranges[i].index = i;
    }
    sort(ranges.begin(), ranges.end());
    ordered_multiset_greater mg;
    mg.insert(ranges[0].r);
    for(int i = 1; i < n; i++){
        int qtd = mg.order_of_key(ranges[i].r - 1);
        contained[ranges[i].index] = qtd;
        mg.insert(ranges[i].r); 
    }

    ordered_multiset_less ms;
    ms.insert(ranges[n-1].r);
    for(int i = n-2; i >= 0; i--){
        int qtd = ms.order_of_key(ranges[i].r + 1);
        contain[ranges[i].index] = qtd;
        ms.insert(ranges[i].r);
    }

    for(auto x : contain)
        cout << x << ' ';
    cout << endl;

    for(auto x : contained)
        cout << x << ' ';
    cout << endl;
    
    return 0;
}
