#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    int n; cin >> n;

    map<string, int> logs;
    set<string>cows;
    string s; int x;
    for(int i = 0; i < n; i++){
        cin >> s >> x;
        cows.insert(s);
        logs[s] += x;
    }

    set<int> milks; 
    for(auto it = logs.begin(); it != logs.end(); it++){
        milks.insert((*it).second);
    }

    if(cows.size() == 1){
        cout << *(cows.begin()) << endl;
    }else if(milks.size() == 1){
        cout << "Tie" << endl;
    }else{
        int target = *(next(milks.begin()));
        string cow = ""; int count = 0;
        for(auto it = logs.begin(); it != logs.end(); it++){
            if((*it).second == target){
                count++;
                cow = (*it).first; 
            }
        }

        if(count == 1){
            cout << cow << endl;
        }else{
            cout << "Tie" << endl;
        }
    }
    return 0;
}