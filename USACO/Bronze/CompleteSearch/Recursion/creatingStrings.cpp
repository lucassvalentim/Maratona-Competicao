#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<char> permutation;
set<vector<char>> result;
void search(string s, vector<bool> &choose, int n){
    if(permutation.size() == n){
        result.insert(permutation);
        return;
    }else{
        for(int i = 0; i < n; i++){
            if(choose[i]) continue;
            choose[i] = true;
            permutation.push_back(s[i]);
            search(s, choose, n);
            choose[i] = false;
            permutation.pop_back();
        }
    }

    return;
}

int main(){

    string s; cin >> s;

    int n = s.size();

    sort(s.begin(), s.end());
    
    vector<bool> choose(n);
    for(int i = 0; i < n; i++){
        choose[i] = false;
    }
    
    search(s, choose, n);
    cout << result.size() << endl;
    for(vector<char> res : result){
        for(char &c : res){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}