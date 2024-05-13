#include <bits/stdc++.h>
using namespace std;

int main(){
    //otimizacao da leitura da entrada
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<string>str;

    int count = 0;
    do{
        str.push_back(s);
        count++;
    }while(next_permutation(s.begin(), s.end()));

    cout << count << endl;
    for(auto x : str)
        cout << x << endl;

    return 0;
}