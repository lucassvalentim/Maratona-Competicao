#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 8;
bool colum[N];
bool rightDiagonal[2 * (N - 1)];
bool lefttDiagonal[2 * (N - 1)];

string chessboard[N];

int ways = 0;
void problem_quens(int r){
    if(r == N){
        ways++;
        return;
    }

    for(int c = 0; c < N; c++){
        if(colum[c] == 0 && rightDiagonal[r + c] == 0 && lefttDiagonal[(r - c) + (N - 1)] == 0 && chessboard[r][c] == '.'){
            colum[c] = 1;
            rightDiagonal[r + c] = 1;
            lefttDiagonal[(r - c) + (N - 1)] = 1;

            problem_quens(r + 1);
    
            colum[c] = 0;
            rightDiagonal[r + c] = 0;
            lefttDiagonal[(r - c) + (N - 1)] = 0;
        }
    }

    return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < N; i++)
        cin >> chessboard[i];

    problem_quens(0);

    cout << ways << '\n';

    return 0;
}