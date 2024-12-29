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

    int maisculas = 0;
    int minusculas = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            maisculas++;
        }else if(s[i] >= 97 && s[i] <= 122){
            minusculas++;
        }
    }

    char c;
    if(maisculas > minusculas){
        for(int i = 0; i < s.size(); i++){
            c = toupper(s[i]);
            cout << c;
        }
        cout << endl;
    }else{
        for(int i = 0; i < s.size(); i++){
            c = tolower(s[i]);    
            cout << c;
        }
        cout << endl;
    }


    return 0;
}