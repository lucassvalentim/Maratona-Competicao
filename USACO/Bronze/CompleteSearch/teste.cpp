#include <bits/stdc++.h>
using namespace std;

int main(){

    set<vector<char>> pairs;
    pairs.insert({'A', 'B', 'C'});
    pairs.insert({'B', 'A', 'C'});
    pairs.insert({'C', 'B', 'D'});
    pairs.insert({'B', 'C', 'D'});

    if(pairs.count({'A', 'B', 'C'}) > 0){
        cout << "Essa tripa foi encontrada" << endl;
    }else{
        cout << "Não foi encontrada" << endl;
    }


    if(pairs.count({'A', 'E', 'C'}) > 0){
        cout << "Essa tripa foi encontrada" << endl;
    }else{
        cout << "Não foi encontrada" << endl;
    }

    for(auto x : pairs){
        for(auto y : x){
            cout << y << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << pairs.size() << endl;
    return 0;
}