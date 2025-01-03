#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<int> childrens;
    for(int i = 1; i <= n; i++)
        childrens.insert(i);

    auto index = childrens.begin();
    while(!childrens.empty()){
        if(index == prev(childrens.end())){
            auto aux = childrens.begin();
            cout << *aux << ' ';
            index = next(aux);
            childrens.erase(aux);
        }else{
            auto aux = next(index);
            cout << *aux << ' ';
            if(aux == prev(childrens.end()))
                index = childrens.begin();
            else
                index = next(aux);
            childrens.erase(aux);
        }
    }
    cout << endl;

    return 0;
}