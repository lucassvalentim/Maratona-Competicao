#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            cout << "0";
        }else if(i < (s.size() - 1) && s[i] == '-' && s[i + 1] == '.'){
            cout << "1";
            i++;
        }else if(i < (s.size() - 1) && s[i] == '-' && s[i + 1] == '-'){
            cout << "2";
            i++;
        }
    }
    cout << endl;

    return 0;
}