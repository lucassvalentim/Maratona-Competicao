#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;
    string s; cin >> s;

    int result = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            if(i == s.size()-1){
                char aux1 = s[i-1];
                while(s[i] == aux1){
                    s[i] = (((s[i] - 65)+ 1) % k) + 65;
                }
            }else{
                char aux1 = s[i-1];
                char aux2 = s[i+1];
                while(s[i] == aux1 || s[i] == aux2){
                    s[i] = (((s[i] - 65)+ 1) % k) + 65;
                }
            }
            result++;
        }
    }
    cout << result << endl << s << endl;

    return 0;   
}