#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;

    while(a != 0 && b != 0){

        set<int>auxset1;
        set<int>auxset2;
        vector<int>ana;
        vector<int>beatriz;
        
        int aux;
        for(int i = 0; i < a; i++){
            cin >> aux;
            auto res = auxset1.insert(aux);
            if(res.second){
                ana.push_back(aux);
            }
        }

        for(int i = 0; i < b; i++){
            cin >> aux;
            auto res = auxset2.insert(aux);
            if(res.second){
                beatriz.push_back(aux);
            }
        }
        
        int anar = 0, beatrizr = 0;
        int l = 0, m = 0;
        while(l < ana.size() && m < beatriz.size()){
            if(ana[l] == beatriz[m]){
                l++;
                m++;
            }

            else if(ana[l] < beatriz[m]){
                anar++;
                l++;
            }

            else if(ana[l] > beatriz[m]){
                beatrizr++;
                m++;
            }
        }    

        if(l < ana.size()){
            anar += ana.size() - l;
        }
        if(m < beatriz.size()){
            beatrizr += beatriz.size() - m;
        }

        if(anar <= beatrizr)
            cout << anar << endl;
        if(beatrizr < anar)
            cout << beatrizr << endl;

        cin >> a >> b;
    }

    return 0;
}