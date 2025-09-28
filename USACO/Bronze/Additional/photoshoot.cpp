#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void reverse_s(string &s, int fim){
    for(int i = 0; i <= fim/2; i++){
        swap(s[i], s[fim - i]);
    }
}

int main(){

    int n;
    string cows;
    cin >> n >> cows;

    int flips = 0;
    for(int c = n - 2; c >= 0; c-=2){
        string subs = cows.substr(c, 2);
        if(subs[0] == subs[1]) continue;

        if((subs == "GH" && flips % 2 == 0) || (subs == "HG" && flips % 2 == 1))
            flips++;
    }    

    cout << flips << endl;
    return 0;
}