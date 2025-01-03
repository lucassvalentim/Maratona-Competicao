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

    vector<int> childrens(n);
    for(int i = 0; i < n; i++)
        childrens[i] = i + 1;
    
    while(childrens.size() > 1){
        vector<int> survives;
        for(int i = 0; i < childrens.size(); i++){
            if(i % 2 == 1)
                cout << childrens[i] << ' ';
            else
                survives.push_back(childrens[i]);
        }

        if(childrens.size() % 2 == 0){
            childrens = survives;
        }
        else{
            int last_element = survives.back();
            survives.pop_back();
            childrens.clear();
            childrens.push_back(last_element);
            for(auto z : survives)
                childrens.push_back(z);
        }   
    }   

    cout << childrens[0] << endl;
    return 0;
}