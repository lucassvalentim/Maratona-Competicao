#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<ll> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }    

    stack<pair<ll, int>> monotonic_stack;
    for(int i = 0; i < n; i++){
        while(!monotonic_stack.empty() && monotonic_stack.top().first >= values[i]){
            monotonic_stack.pop();
        }

        if(monotonic_stack.size() == 0){
            cout << "0 ";
        }else{
            cout << monotonic_stack.top().second << ' ';
        }

        monotonic_stack.push({values[i], i + 1});
    }
    cout << endl;
    
    return 0;
}