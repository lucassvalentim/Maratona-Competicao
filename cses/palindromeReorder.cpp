#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    map<char, int> p;

    int count = 0;

    while(cin >> c){
        p[c] += 1;
        count += 1;
    }


    /* 
        Fazer o processo de NO SOLUTION
    */

    /*
    
        Melhor a impressão
    
    */
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