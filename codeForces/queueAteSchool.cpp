#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n, t;
    
    cin >> n >> t;
    cin >> s;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < s.size() - 1; j++){
            if(s[j] == 'B' && s[j + 1] == 'G'){
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }

    cout << s << endl;

    return 0;
}