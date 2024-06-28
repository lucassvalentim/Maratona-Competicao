#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, d;
    cin >> a >> d;

    while(a != 0 && d != 0){
        vector<int>atacantes(a);
        vector<int>defensores(d);

        for(int i = 0; i < a; i++)
            cin >> atacantes[i];
        
        for(int i = 0; i < d; i++)
            cin >> defensores[i];

        sort(atacantes.rbegin(), atacantes.rend());
        sort(defensores.rbegin(), defensores.rend());

        if(atacantes[a-1] < defensores[d-2]){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }

        cin >> a >> d;
    }

    return 0;
}