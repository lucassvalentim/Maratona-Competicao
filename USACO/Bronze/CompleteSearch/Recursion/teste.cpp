#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<int>subset;
int n;

vector<int>permutation;
vector<bool> choose;
void search(int n){
    if(permutation.size() == n){
        for(auto p : permutation)
            cout << p << ' ';
        cout << endl;
        return;
    }else{
        for(int i = 0; i < n; i++){
            if(choose[i]) continue;
            choose[i] = true;
            permutation.push_back(i);
            search(n);
            choose[i] = false;
            permutation.pop_back();
        }
    }

    return;
}

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        choose.push_back(false);

    search(n);
    return 0;
}