#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    string s;
    cin >> s;

    string result = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+') result += s[i];
    }

    sort(result.begin(), result.end());

    for(int i = 0; i < result.size(); i++){
        if(i < result.size() - 1){
            cout << result[i] << '+';
        }else{
            cout << result[i] << endl;
        }
    }

    return 0;
}