#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    set<int> s;

    int x;
    for(int i = 0; i < 4; i++){
        cin >> x;
        s.insert(x);   
    }

    cout << 4 - s.size() << endl;
    return 0;
}