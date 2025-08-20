#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

int main(){
    
    int n; 
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        if(s.size() > 10){
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }else{
            cout << s << endl;
        }
    }

    return 0;
}