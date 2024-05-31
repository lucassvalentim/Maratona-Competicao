#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    int a;
    vector<int>coins;
    for(int i = 0; i < n; i++){
        cin >> a;
        coins.push_back(a);
    }

    vector<ll>count(x+1, 0);
    count[0] = 1;

    int max;
    for(int i = 1; i <= x; i++){
        int j = 0;
        for(int c : coins){
            cout << "c: " << c << " i: " << i << endl;
            if(i - c >= 0){
                if(j == 0)
                    max = count[i-c];
                if(count[i-c] >= max){
                    count[i] += count[i-c];
                    count[i] %= 1000000007;
                }
                cout << "max: " << max << endl;
                cout << "i-c: " << i-c << endl;
            }
            j++;
        }
    }

    cout << count[x] << endl;

    return 0;
}