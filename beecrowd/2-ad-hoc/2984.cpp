#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    string s;
    cin >> s;

    int aberto = 0;
    for(auto c : s){
        if(c == ')' && aberto > 0){
            aberto--;
        }

        if(c == '('){
            aberto ++;
        }
    }

    if(aberto > 0){
        cout << "Ainda temos " << aberto <<" assunto(s) pendente(s)!\n";
    }else{
        cout << "Partiu RU!\n";
    }
    
    return 0;
}