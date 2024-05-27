#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while(cin >> s){
        stack<char>p;
        int tam = s.size();
        for(int i = 0; i < tam; i++){
            if(s[i] == '('){
                p.push('(');
            }else if(s[i] == ')'){
                if(!p.empty()){
                    p.pop();
                }else{
                    p.push('(');
                }
            }
        }

        if(p.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
   
    return 0;
}