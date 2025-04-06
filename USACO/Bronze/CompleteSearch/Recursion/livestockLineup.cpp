#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n;
    cin >> n;

    vector<string> names = {"Bessie", "Buttercup", "Belinda", "Beatrice",
                            "Bella", "Blue", "Betsy", "Sue"};

    // Cada vaca pode ter mais de uma vizinha
    map<string, vector<string>> beside;

    string s1, s2, trash;
    for (int i = 0; i < n; i++) {
        cin >> s1;
        for (int j = 0; j < 4; j++) cin >> trash;
        cin >> s2;

        beside[s1].push_back(s2);
        beside[s2].push_back(s1);
    }

    // Testa todas as permutações possíveis em ordem alfabética
    sort(names.begin(), names.end());

    do {
        bool valid = true;
        for (int i = 0; i < names.size(); i++) {
            string cow = names[i];
            for (string neighbor : beside[cow]) {
                bool next_to = false;
                if (i > 0 && names[i - 1] == neighbor) next_to = true;
                if (i < names.size() - 1 && names[i + 1] == neighbor) next_to = true;
                if (!next_to) {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }

        if (valid) {
            for (string s : names)
                cout << s << '\n';
            break;
        }

    } while (next_permutation(names.begin(), names.end()));

    return 0;
}
