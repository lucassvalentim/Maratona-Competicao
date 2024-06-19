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
    while(n != 0){
        vector<int>picos(n);
        for(int i = 0; i < n; i++){
            cin >> picos[i];
        }

        int pico = 0;
        for(int i = 0; i < n; i++){
            if(i == 0){
                if(picos[i] < picos[n-1] && picos[i] < picos[i+1])
                    pico++;
                else if(picos[i] > picos[n-1] && picos[i] > picos[i+1])
                    pico++;
            }
            else if(i == n-1){
                if(picos[i] < picos[0] && picos[i] < picos[i-1])
                    pico++;
                else if(picos[i] > picos[0] && picos[i] > picos[i-1])
                    pico++;
            }else{
                if(picos[i] < picos[i-1] && picos[i] < picos[i+1])
                    pico++;
                else if(picos[i] > picos[i-1] && picos[i] > picos[i+1])
                    pico++;
            }
        }

        cout << pico << endl;

        cin >> n;
    }

    return 0;
}