#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    ll target;
    cin >> target;

    vector<pair<ll, int>> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i].first;
        nums[i].second = i + 1;
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        ll target2 = target - nums[i].first;
        for(int j = i + 1, k = n - 1; j < k; j++){
            while(nums[j].first + nums[k].first > target2){
                k--;
            }

            if(j < k && nums[j].first + nums[k].first == target2){
                cout << nums[i].second << ' ' << nums[j].second << ' ' << nums[k].second << endl;
                return 0;
            }
        }   
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}