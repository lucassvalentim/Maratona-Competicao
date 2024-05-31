#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){

    int n;
    
    cin >> n;
    while(n != 0){
        int alunos[n][n];

        int x;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> x;
                alunos[i][j] = x;            
            }   
        }

        map<int,int>popular;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(alunos[i][j] == 1)
                    popular[j+1]++;
            }   
        }

        int maxvalue = -1;
        for(auto x : popular){
            if(x.second > maxvalue)
                maxvalue = x.second;
        }
        
        cout << maxvalue << '\n';
        cin >> n;
    }
    
    return 0;
}