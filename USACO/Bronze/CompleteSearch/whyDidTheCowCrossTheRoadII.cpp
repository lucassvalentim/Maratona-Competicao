#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string path;
    cin >> path;

    set<set<char>> pairs;
    for(int i = 0; i < path.size(); i++){
        vector<int> letters(26, 0);
        
        int j = i + 1;
        while(path[j] != path[i] && j < path.size()){
            letters[path[j] - 65] += 1;
            j++;
        }
        
        if(j >= path.size()) continue;

        for(int k = 0; k < 26; k++){
            if(letters[k] == 1){
                char aux = k + 65;
                pairs.insert({path[i], aux});
            }
        }
    }

    cout << pairs.size() << endl;

    return 0;
}