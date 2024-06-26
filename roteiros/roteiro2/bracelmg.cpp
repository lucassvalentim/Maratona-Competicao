#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    string s1, s2, s3;
    while(t--){
        cin >> s1 >> s2;
        s3 = s2 + s2;

        if(s3.find(s1) != string::npos){
            cout << 'S' << endl;
        }else{
            reverse(s3.begin(), s3.end());
            if(s3.find(s1) != string::npos)
                cout << 'S' << endl;
            else
                cout << 'N' << endl;
        }
    }

    return 0;
}