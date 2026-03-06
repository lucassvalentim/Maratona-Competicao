#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    string s;
    int cont  = 1;

    cin >> s;
    while(s != "*"){
        string substr = "";
        substr += s[0];
        string maior = substr;
        for(int i = 1; i < s.size(); i++){
            string c = "";
            c += s[i];
            if(c < substr){
                substr = c;
            }else{
                substr += c;
            }
            if(substr.size() >= maior.size()){
                if(maior > substr){
                    maior = substr;
                }
            }
            cout << "subs: " << substr << endl;
            cout << "maior: " << maior << endl;
        }

        cout << maior << endl;
        cin >> s;
    }
    
    return 0;
}