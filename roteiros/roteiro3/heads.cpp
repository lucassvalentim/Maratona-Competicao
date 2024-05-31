#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int, int>>possibilidades;
    for(int i = a; i <= x; i++){
        for(int j = b; j < i && j <= y; j++){
            possibilidades.push_back(make_pair(i, j));
        }
    }
    
    sort(possibilidades.begin(), possibilidades.end());
    
    if(possibilidades.size() == 0){
        cout << "0" << '\n';
    }
    else{
        cout << possibilidades.size() << '\n';
        for(auto x : possibilidades)
            cout << x.first << " " << x.second << '\n';
    }
    return 0;
}