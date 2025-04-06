#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

typedef struct cows{
    int s, t, c;
}Cows;

typedef struct conditioner{
    int a, b, p, m;
}Conditioner;

vector<Conditioner> subsets;
int min_result = INT_MAX;

void solve(vector<Conditioner> &cond, vector<Cows> cows, int index, int m){
    if(index == m){
        vector<int>aux(101, 0);
        int preco = 0;

        for(Conditioner &cond : subsets){
            for(int i = cond.a; i <= cond.b; i++){
                aux[i] += cond.p;
            } 
            preco += cond.m;
        }

        for(Cows &cow : cows){
            for(int i = cow.s; i <= cow.t; i++){
                if(aux[i] < cow.c){
                    return;
                }
            }
        }
        min_result = min(min_result, preco);
        
    }else{
        solve(cond, cows, index + 1, m);
        subsets.push_back(cond[index]);
        solve(cond, cows, index + 1, m);
        subsets.pop_back();
    }
}

int main(){
    
    int n, m; cin >> n >> m;
    vector<Cows> c(n);
    for(Cows &cow : c){
        cin >> cow.s >> cow.t >> cow.c;
    }

    vector<Conditioner> d(m);
    for(Conditioner &cond : d){
        cin >> cond.a >> cond.b >> cond.p >> cond.m;
    }

    solve(d, c, 0, m);
    cout << min_result << endl;

    return 0;
}