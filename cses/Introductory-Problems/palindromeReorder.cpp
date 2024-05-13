#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    map<char, int> p;

    while(cin >> c){
        p[c] += 1;
    }

    int par = 0;
    int impar = 0;
    for(auto it = p.begin(); it != p.end(); it++){
        if(it->second % 2 == 0)
            par++;
        else
            impar++;
    }

    if(impar > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    int aux;
    for(auto it = p.begin(); it != p.end(); it++){
        if(it->second % 2 == 0){
            aux = it->second / 2; 
            while(aux--){
                cout << it->first;
            }
        }
    }
    for(auto it = p.begin(); it != p.end(); it++){
        if(it->second % 2 != 0){
            aux = it->second; 
            while(aux--){
                cout << it->first;
            }
        }
    }
    for(auto it = p.rbegin(); it != p.rend(); it++){
        if(it->second % 2 == 0){
            aux = it->second / 2; 
            while(aux--){
                cout << it->first;
            }
        }
    }
    cout << endl;

    return 0;
}