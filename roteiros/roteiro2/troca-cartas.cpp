#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int a, b;
    cin >> a >> b;

    while(a!=0 && b!=0){
        set<int>A;
        set<int>B;

        int x;
        for(int i = 0; i < a; i++){
            cin >> x;
            A.insert(x);
        }//O(log n)

        for(int i = 0; i < b; i++){
            cin >> x;
            B.insert(x);
        }//O(log n)
        
        int totalA = 0;
        for(int elem : A){
            if(!B.erase(elem)){
                totalA++;
            }
        }//O(nlongn)

        int totalB = 0;
        for(int elem : B){
            if(!A.erase(elem)){
                totalB++;
            }
        }//O(nlogn)

        if(totalA <= totalB)
            cout << totalA << endl;
        else
            cout << totalB << endl;


        cin >> a >> b;
    }


    return 0;
}