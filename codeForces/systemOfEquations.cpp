#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int function(int b, int m, int n){
    return pow(b, 4) - (2*m*pow(b, 2)) + b + (pow(m, 2) - n);
}
int main(){

    int n, m;
    cin >> n >> m;

    int result = 0;
    for(int a = 0; a <= n; a++){
        for(int b = 0; b <= n; b++){
            if((pow(a, 2) + b == n) && (a + pow(b, 2)) == m){
                result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}