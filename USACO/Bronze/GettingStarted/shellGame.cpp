#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'



int main(){

    freopen("shell.in", "r", stdin);

    int n;
    cin >> n;

    vector<int> shells(3);
    
    int a, b, g;
    vector<tuple<int, int, int>> play;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> g; a--; b--; g--;
        play.push_back(make_tuple(a, b, g));
    }

    int maximum = 0;
    for(int i = 0; i < 3; i++){
        fill_n(shells.begin(), 3, 0);
        shells[i] = 1;
        int cont = 0;
        for(int j = 0; j < play.size(); j++){
            int x = get<0>(play[j]);
            int y = get<1>(play[j]);
            int target = get<2>(play[j]);

            swap(shells[x], shells[y]);
            if(shells[target] == 1){
                cont++;
            }
        }

        if(cont > maximum){
            maximum = cont;
        }
    }

    freopen("shell.out", "w", stdout);
    cout << maximum << endl;
    return 0;
}