#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define endl '\n'

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    ordered_set<int> children;
    for(int i = 1; i <= n; i++)
        children.insert(i);
    
    int start = 0;
    while(children.size() > 0){
        start %= children.size();
        int position_removed = (start+k)%children.size();
        start = position_removed;
        auto it = children.find_by_order(position_removed);
        cout << *it << ' ';
        children.erase(it);
    }
    cout << endl;
    return 0;
}