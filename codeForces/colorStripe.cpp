#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;
    string s; cin >> s;

    if(k == 2){
        string seq1 = "";
        string seq2 = "";
        
        char c = 'A';
        for(int i = 0; i < n; i++){
            seq1 += (c);
            seq2 += ((c - 65 + 1) % 2) + 65;
            c = ((c - 65 + 1) % 2) + 65;
        }
        
        int result1 = 0;
        int result2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != seq1[i]) result1++;
            if(s[i] != seq2[i]) result2++;
        }

        if(result1 < result2){
            cout << result1 << endl;
            cout << seq1 << endl;
        }else{
            cout << result2 << endl;
            cout << seq2 << endl;
            
        }
        return 0; 
    }

    int result = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            if(i == s.size()-1){
                char aux1 = s[i-1];
                while(s[i] == aux1){
                    s[i] = (((s[i] - 65)+ 1) % k) + 65;
                }
            }else{
                char aux1 = s[i-1];
                char aux2 = s[i+1];
                while(s[i] == aux1 || s[i] == aux2){
                    s[i] = (((s[i] - 65)+ 1) % k) + 65;
                }
            }
            result++;
        }
    }
    cout << result << endl << s << endl;

    return 0;   
}