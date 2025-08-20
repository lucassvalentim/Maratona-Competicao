#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    int n; scanf("%d", &n);
    
    int left[2] = {0, 0};
    int right[2] = {0, 0};

    int l, r;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &l, &r);
        left[l]++;
        right[r]++;
    }

    int soma = 0;
    soma += left[0] < left[1] ? left[0] : left[1];
    soma += right[0] < right[1] ? right[0] : right[1];

    cout << soma << endl;

    return 0;
}