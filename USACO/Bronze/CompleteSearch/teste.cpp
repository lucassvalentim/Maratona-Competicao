#include <bits/stdc++.h>
using namespace std;

int main(){

    set<set<char>> pairs;
    pairs.insert({'A', 'B'});
    pairs.insert({'B', 'A'});
    pairs.insert({'C', 'B'});
    pairs.insert({'B', 'C'});


    cout << pairs.size() << endl;
    return 0;
}