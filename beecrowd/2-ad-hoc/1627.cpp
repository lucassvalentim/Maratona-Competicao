#include <bits/stdc++.h>
using namespace std;


int main(){

   int n;
   cin >> n;

   while(n--){
        int at, ad;
        int bt, bd;
        cin >> at >> ad;
        cin >> bt >> bd;

        int h;
        cin >> h;
        
        if(h - at <= 0){
            cout << "Andre\n";
            continue;
        }
        h -= at;
        
        if(h - bt <= 0){
            cout << "Beto\n";
            continue;
        }
        h -= bt;

        int ai = ad - 1;
        int bi = bd;
        
        while(true){
            if(ai <= 0){
                h -= at;
                if(h <= 0){
                    cout << "Andre\n";
                    break;
                }
                ai = ad;
            }else if (bi <= 0){
                h -= bt;
                if(h <= 0){
                    cout << "Beto\n";
                    break;
                }
                bi = bd;
            }else{
                ai--;
                bi--;
            }
        }
   }


    return 0;
}