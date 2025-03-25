#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> alphabet(26, 0); // Um vetor para armazenar a contagem das letras

    string s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2;

        vector<int> count1(26, 0), count2(26, 0); // Contagem de letras para cada lado

        for (char x : s1) count1[x - 'a']++; // Conta as letras de s1
        for (char x : s2) count2[x - 'a']++; // Conta as letras de s2

        // O número necessário de blocos é o máximo entre as contagens de cada lado
        for (int j = 0; j < 26; j++) {
            alphabet[j] += max(count1[j], count2[j]);
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << endl;
    }

    return 0;
}