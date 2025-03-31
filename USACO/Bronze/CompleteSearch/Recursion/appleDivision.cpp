#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(vector<int> &apples, int group1, int group2, int i){
    if(i == apples.size()) return;
    cout << '(' << group1 << ',' << group2 << ')';
    solve(apples, group1 + apples[i],  group2 - apples[i], i + 1);
    solve(apples, group1 - apples[i],  group2 + apples[i], i + 1);
    cout << endl;
    cout << '(' << group1 << ',' << group2 << ')';
}

int main(){

    int n;
    cin >> n;

    vector<int> apples(n);
    int sum = 0;
    for(int &ap : apples){
        cin >> ap;
        sum += ap;
    }
    
    for(int &ap : apples)
        cout << ap << ' ';
    cout << endl;
    
    solve(apples, 0, sum, 0); cout << endl;
    return 0;
}