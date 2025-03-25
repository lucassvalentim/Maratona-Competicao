#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<string> spotty(n);
    vector<string> plain(n);
    
    for(string &s : spotty)
        cin >> s;
    
    for(string &s : plain)
        cin >> s;

    int pos = 0;
    for(int i = 0; i < m; i++){
        bool equal = false;
        for(string &s1 : spotty){
            for(string &s2 : plain){
                if(s1[i] == s2[i]){
                    equal = true;
                    break;
                }
            }
            if(equal) break;
        }    
        if(!equal) pos++; 
    }

    cout << pos << endl;
    return 0;
}