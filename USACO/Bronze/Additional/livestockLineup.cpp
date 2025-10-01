#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<string> COWS = [](){
    vector<string> temp = {"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};
    sort(begin(temp), end(temp));
    return temp;
}();

int main(){

    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    map<string, int> cows_i;
    for(int i = 0; i < COWS.size(); i++) cows_i[COWS[i]] = i;
    
    int n; cin >> n;

    vector<vector<int>> neighbors(COWS.size());
    for(int i = 0; i < n; i++){
        string s1, s2, t;
        cin >> s1 >> t >> t >> t >> t >> s2;

        int c1 = cows_i[s1];
        int c2 = cows_i[s2];

        neighbors[c1].push_back(c2);
        neighbors[c2].push_back(c1);
    }

    vector<int> order;
    vector<bool> added(COWS.size(), false);

    for(int c = 0; c < COWS.size(); c++){
        if(!added[c] && neighbors[c].size() <= 1){
            added[c] = true;
            order.push_back(c);

            if(neighbors[c].size() == 1){
                int prev = c;
                int at = neighbors[c][0];
                while(neighbors[at].size() == 2){
                    added[at] = true;
                    order.push_back(at);

                    int n1 = neighbors[at][0];
                    int n2 = neighbors[at][1];
                    int temp = n1 == prev ? n2 : n1;

                    prev = at;
                    at = temp;
                }

                added[at] = true;
                order.push_back(at);
            }
        }
    }

    for(auto o : order) cout << COWS[o] << endl;
    
    return 0;
}


