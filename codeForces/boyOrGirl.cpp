#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    set<char> s;

    char c;
    while(cin >> c){
        s.insert(c);
    }
    
    if(s.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}