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
        for(int j = i + 1; j < m; j++){
            for(int k = j + 1; k < m; k++){
                set<vector<char>> verifica;
                for(int linhas = 0; linhas < n; linhas++){
                    verifica.insert({spotty[linhas][i], spotty[linhas][j], spotty[linhas][k]});
                }

                int equal = false;
                for(int linhas = 0; linhas < n; linhas++){
                    if(verifica.count({plain[linhas][i], plain[linhas][j], plain[linhas][k]}) > 0){
                        equal = true;
                        break;
                    }
                }
                
                if(!equal) pos++;
            }
        }
    }

    cout << pos << endl;

    return 0;
}