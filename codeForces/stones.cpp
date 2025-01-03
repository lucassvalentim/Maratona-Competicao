#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int result = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            result++;
        }
    }

    cout << result << endl;
    return 0;
}