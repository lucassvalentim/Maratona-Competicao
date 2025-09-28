#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int result = 0, qtd_ss = 0;
    bool ss = false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            ss = true;
            qtd_ss++;
        }else if(ss){
            result++;
            qtd_ss = 0;
            ss = false;
        }
    }
    
    if(ss){
        result++;
        qtd_ss = 0;
        ss = false;
    }


    cout << result << endl;

    return 0;
}