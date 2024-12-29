#include <bits/stdtr1c++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<ll> cubes(n);
    for(int i = 0; i < n; i++)
        cin >> cubes[i];
        
    multiset<ll> towers;
    for(int i = 0; i < n; i++){
        if(towers.size() == 0){
            towers.insert(cubes[i]);
        }else{
            auto base = towers.upper_bound(cubes[i]);
            if(base == towers.end()){
                towers.insert(cubes[i]);
            }
            else{
                towers.erase(base);
                towers.insert(cubes[i]);
            }
        }
    }

    cout << towers.size() << endl;
    return 0;
}