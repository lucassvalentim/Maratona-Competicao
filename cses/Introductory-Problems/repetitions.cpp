#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() { 

    string s; cin >> s;

    char letter = s[0];
    int length = 1;
    int max_length = length;

    for (int i = 1; i < s.size(); i++){
        if (s[i] == letter) {
            length++;
        }else {
            letter = s[i];
            if (length > max_length){
                max_length = length;
            }
            length = 1;
        }
    }

    if (length > max_length){
        max_length = length;
    }

    cout << max_length << endl;
    return 0;
}