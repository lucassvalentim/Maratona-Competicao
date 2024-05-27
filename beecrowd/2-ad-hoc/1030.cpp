#include <bits/stdc++.h>
using namespace std;

#define ll long long


int solve(int pessoas, int salto){
    if(pessoas == 1)
        return 1;
    else 
        return (solve(pessoas - 1, salto) + salto - 1) % pessoas + 1;
}

int main(){

    int nc;
    scanf("%d", &nc);

    int n, k;
    int c = 1;
    while (nc--){
        scanf("%d %d", &n, &k);
        cout << "Case " <<  c << ": " << solve(n, k) << endl;        
        c++;
    }
    
    return 0;
}