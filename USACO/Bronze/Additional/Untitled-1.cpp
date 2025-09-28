#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool solve(string s1, string s2){
    for(int i = 0; i < s1.size(); i++){
        for(int j = 0; j < s2.size(); j++){
            if(s1[i] == s2[j]){
                return 1;
            }
        }
    }

    return 0;
}

int main(){

    int n;
    cin >> n;

    vector<string> numbers(n);
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    int result = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(solve(numbers[i], numbers[j])){
                result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}