#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string s1, s2;
    cin >> s1 >> s2;

    string result = "";
    for(int i = 0; i < s1.size(); i++){
        result += s1[i] != s2[i] ? '1' : '0';
    }

    cout << result << endl;
    return 0;
}