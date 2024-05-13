#include <bits/stdc++.h>
using namespace std;

void tower_hanoi(int n, int source, int dest, int aux){
    if(n > 0){
        tower_hanoi(n - 1, source, aux, dest);
        cout << source << " " << dest << endl;
        tower_hanoi(n - 1, aux, dest, source);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    // number of moves
    cout << pow(2, n) - 1 << endl;

    //the moves
    tower_hanoi(n, 1, 3, 2);
    return 0;
}