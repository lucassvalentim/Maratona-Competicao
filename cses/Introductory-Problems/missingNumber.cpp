#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() { 

    int n; cin >> n;
    vector<int> numbers(n - 1);
    for(int &x : numbers){
        cin >> x;
    }

    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < n; i++){
        if (i < n - 1 && numbers[i] != i + 1){
            cout << i + 1 << endl;
            break;
        }else if (i == n - 1){
            cout << i + 1 << endl;
        }
    }

    return 0;
}