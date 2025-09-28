#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n; cin >> n;
    vector<int> days(7);
    
    for(int i = 0; i < 7; i++){
        cin >> days[i];
    }
    
    int j = 0;
    while(true){
        n -= days[j];

        if(n <= 0) break;
        j = (j + 1) % 7;
    }

    cout << j + 1 << endl;
    return 0;
}