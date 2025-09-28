#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool is_sort(vector<int> &part_sort){
    for(int x : part_sort){
        cout << x << ' ';
    }
    cout << endl;

    return true;
}

int main(){

    int n; cin >> n;

    vector<int>pos(n);
    for(int &x : pos) cin >> x;

    vector<int>part_sort(pos.begin(), pos.end()-1);
    vector<int>aux(part_sort.begin() + 1, part_sort.end());

    is_sort(aux);


    return 0;
}