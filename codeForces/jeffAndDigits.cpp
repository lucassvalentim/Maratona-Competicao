#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    vector<int> numbers(n);
    bool exist0 = false; ll five = 0, maxfive = 0;
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        if(numbers[i] == 0)
            exist0 = true;
        
        if(numbers[i] == 5)
            five += 5;

        if(five % 9 == 0){
            maxfive = five;        
        }
    }

    sort(numbers.rbegin(), numbers.rend());
    if(!exist0){
        cout << -1 << endl;
    }else{
        if(maxfive == 0){
            cout << 0;
        }else{
            five = 0;
            for(int i = 0; i < n; i++){
                if(numbers[i] == 5){
                    five+=5;
                    if(five > maxfive) continue;
                }
                cout << numbers[i];
            }
            cout << endl;
        }
    }
    return 0;
}