#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {

    int n;
    cin >> n;

    vector<ll> numbers(n);
    
    for(ll &x : numbers)
        cin >> x;

    ll movimentos = 0;
    for(int i = 1; i < numbers.size(); i++){
        if (numbers[i] < numbers[i - 1]){
            int dif = numbers[i - 1] - numbers[i];
            numbers[i] += dif;
            movimentos += dif;
        }
    }

    cout << movimentos << endl;
    return 0;
}