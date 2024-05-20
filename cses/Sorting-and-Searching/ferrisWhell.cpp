#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    ll max;
    cin >> n >> max;

    vector<ll>child(n);
    for(int i = 0; i < n; i++){
        cin >> child[i];
    }    

    sort(child.begin(), child.end());

    int gondolas = 0;

    int begin = 0;
    int end = n - 1;

    while(begin <= end){
        if(child[begin] + child[end] <= max){
            begin++;
            end--;
            gondolas++;
            continue;
        }

        end--;
        gondolas++;
    }

    cout << gondolas << endl;
    return 0;
}