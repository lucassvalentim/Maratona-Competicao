#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0){

        int minutos = 0;
        while(h1 != h2 || m1 != m2){
            m1++;
            if(m1 >= 60){
                h1++;
                m1 = 0;
            }
            if(h1 >= 24){
                h1 = 0;
            }

            minutos++;
        }

        cout << minutos << endl;

        cin >> h1 >> m1 >> h2 >> m2;
    }
    return 0;
}