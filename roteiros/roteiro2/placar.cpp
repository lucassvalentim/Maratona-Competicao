#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int comp(pair<string, int> &a, pair<string, int> &b){
    if(a.second > b.second){
        return 1;
    }
    else if(a.second == b.second){
        if(a.first < b.first)
            return 1;
        else
            return 0;
    }
    else{
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int instancia = 1;
    while(cin >> n){
        vector<pair<string, int>>alunos;
        string s;
        int pts;

        for(int i = 0; i < n; i++){
            cin >> s;
            cin >> pts;

            alunos.push_back(make_pair(s, pts));
        }
        
        sort(alunos.begin(), alunos.end(), comp);

        cout << "Instancia " << instancia << endl;
        cout << alunos[n - 1].first << endl;

        instancia++; 
    }

    return 0;
}