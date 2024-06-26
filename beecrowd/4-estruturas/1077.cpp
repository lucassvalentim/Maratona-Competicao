#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int precedencia(char operador){
    switch (operador){
        case '+':
        case '-':
            return 1;    
        case '*':
        case '/':
            return 2;
    }
    return 3;
}


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string expressao;
    while(n--){
        cin >> expressao;
        
        stack<char>op;
        for(int i = 0; expressao[i] != '\0'; i++){
            if(isalpha(expressao[i]) || isdigit(expressao[i])){
                cout << expressao[i];
            }else if(expressao[i] == '(' || expressao[i] == '^'){
                op.push(expressao[i]);
            }else if(expressao[i] == ')'){
                while(!op.empty() && op.top()!='('){
                    cout << op.top();
                    op.pop();
                }

                if(!op.empty())
                    op.pop();
            }else{
                while(!op.empty() && op.top() != '(' && precedencia(expressao[i]) <= precedencia(op.top())){
                    cout << op.top();
                    op.pop();
                }

                op.push(expressao[i]);
            }
        }

        while(!op.empty()){
            cout << op.top();
            op.pop();
        }
        cout << endl;
    }

    return 0;
}