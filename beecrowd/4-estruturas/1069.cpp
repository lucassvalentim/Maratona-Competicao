#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s;
    while(n--){
        stack<char>diamantes;
        cin >> s;
        
        int qtd = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == '<')
                diamantes.push('<');
            if(s[i] == '>'){
                if(!diamantes.empty()){
                    qtd++;
                    diamantes.pop();
                }
            }
        }

        cout << qtd << endl;
    }

    return 0;
}