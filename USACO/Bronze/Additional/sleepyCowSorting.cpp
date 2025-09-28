#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool is_sort(set<int> &set_sort, vector<int> &part_sort){
    if(part_sort.size() == 0) return 1;

    if(part_sort.size() == 1){
        if(part_sort[0] < *set_sort.begin())
            return 1;

        return 0;
    }

    bool ord = true;
    for(int i = 1; i < part_sort.size(); i++){
        if(part_sort[i] < part_sort[i-1]){
            ord = false;
            break;
        }
    }

    if(ord){
        if(part_sort[part_sort.size() - 1] < *set_sort.begin())
            return 1;

        return 0;
    }
    
    return 0;
}

int main(){

    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);

    int n; cin >> n;

    vector<int>pos(n);
    for(int &x : pos) cin >> x;

    set<int>set_sort;
    
    set_sort.insert(pos[n-1]);
    for(int i = n - 2; i >= 0; i--){
        if(pos[i] < pos[i+1]){
            set_sort.insert(pos[i]);
        }else{
            break;
        }
    }
    
    int result = 0;
    vector<int>part_sort(pos.begin(), pos.end()-set_sort.size());
    for(int i = 0; i < part_sort.size(); i++){
        vector<int>aux(part_sort.begin() + i, part_sort.end());
        if(is_sort(set_sort, aux)){
            break;
        }

        set_sort.insert(part_sort[i]);
        result++;
    }

    cout << result << endl;
    return 0;
}