#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    int n;
    while(cin >> n){
        vector<int>pre(n+1, 0);
        int x, soma = 0;
        for(int i = 1; i <= n; i++){
            cin >> x;
            soma += x;
            pre[i] = pre[i-1] + x;
        }

        int c = soma / 3;
        int qtd = 0;
        for(int i = 1; i <= n; i++){
            auto it1 = lower_bound(pre.begin(), pre.end(), pre[i] + c);
            auto it2 = lower_bound(pre.begin(), pre.end(), pre[i] + 2*c);
        
            if(it1 != pre.end() and it2 != pre.end()){
                if(*it1 == pre[i] + c and *it2 == pre[i] + 2*c){
                    qtd++;
                }
            }
        }

        cout << qtd << endl;
    }


    return 0;
}