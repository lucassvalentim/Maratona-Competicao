#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define MAX 1000

int main(){

    freopen("blist.in", "r", stdin);

    int n;
    cin >> n;

    vector<int> change(MAX + 1);
    for(int c = 0; c < n; c++){
        int start, end, amt;
        cin >> start >> end >> amt;

        change[start] += amt;
        change[end] -= amt;
    }
    
    int max_bucket = 0;
    int current_bucket = 0;

    for(int t = 0; t < MAX + 1; t++){
        current_bucket += change[t];
        max_bucket = max(current_bucket, max_bucket);
    }

    freopen("blist.out", "w", stdout);

    cout << max_bucket << endl;
    return 0;
}