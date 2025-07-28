#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    ll target;
    cin >> n >> target;

    vector<pair<int, int>>numbers(n);
    int i = 0;
    for(auto &x : numbers){
        cin >> x.first;
        x.second = i + 1;
        i++;
    }

    sort(numbers.begin(), numbers.end());
    
    int ini = 0;
    int fim = n-1;

    bool impossible = true;
    while(ini < fim){
        if(numbers[ini].first + numbers[fim].first < target)
            ini++;
        else if(numbers[ini].first + numbers[fim].first > target)
            fim--;
        else if(numbers[ini].first + numbers[fim].first == target){
            impossible = false;
            break;
        }
        else{
            impossible = true;
            break;
        }
    }

    if(!impossible){
        cout << numbers[ini].second << ' ' << numbers[fim].second  << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}