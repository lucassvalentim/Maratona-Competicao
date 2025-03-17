#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main(){

    int n;

    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n; i++)
        cin >> y[i];

    int hight = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int dx = x[j] - x[i];
            int dy = y[j] - y[i]; 

            hight = max(hight, dx*dx + dy*dy);
        }
    }

    cout << hight << endl;
    return 0;
}