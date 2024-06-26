#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p;
    cin >> p;

    string s;
    while(p--){
        cin >> s;
        cout << s << ": ";
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c);});
        int aux = false;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] >= s[i+1]){
                aux = true;
                break;
            }
        }
        if(aux)
            cout << 'N' << endl;
        else
            cout << 'O' << endl;
    }

    return 0;
}