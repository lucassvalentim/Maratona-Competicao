#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    vector<vector<char>> ticTacToe(3, vector<char>(3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> ticTacToe[i][j];

    set<char> indiv_winners;
    set<pair<char, char>> team_winners;

    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        set<char> aux_linha, aux_coluna;
        for (int j = 0; j < 3; j++) {
            aux_linha.insert(ticTacToe[i][j]);
            aux_coluna.insert(ticTacToe[j][i]);
        }

        if (aux_linha.size() == 1)
            indiv_winners.insert(*aux_linha.begin());
        if (aux_coluna.size() == 1)
            indiv_winners.insert(*aux_coluna.begin());

        if (aux_linha.size() == 2) {
            char a = *aux_linha.begin(), b = *next(aux_linha.begin());
            if (a > b) swap(a, b);
            team_winners.insert({a, b});
        }
        if (aux_coluna.size() == 2) {
            char a = *aux_coluna.begin(), b = *next(aux_coluna.begin());
            if (a > b) swap(a, b);
            team_winners.insert({a, b});
        }
    }

    // Verificar diagonais
    set<char> diag_princ, diag_sec;
    for (int i = 0; i < 3; i++) {
        diag_princ.insert(ticTacToe[i][i]);
        diag_sec.insert(ticTacToe[i][2 - i]);
    }

    if (diag_princ.size() == 1)
        indiv_winners.insert(*diag_princ.begin());
    if (diag_sec.size() == 1)
        indiv_winners.insert(*diag_sec.begin());

    if (diag_princ.size() == 2) {
        char a = *diag_princ.begin(), b = *next(diag_princ.begin());
        if (a > b) swap(a, b);
        team_winners.insert({a, b});
    }
    if (diag_sec.size() == 2) {
        char a = *diag_sec.begin(), b = *next(diag_sec.begin());
        if (a > b) swap(a, b);
        team_winners.insert({a, b});
    }

    cout << indiv_winners.size() << endl;
    cout << team_winners.size() << endl;

    return 0;
}
