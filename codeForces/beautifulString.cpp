#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int equal_digit(string s){
    for(int i = 0; i < s.size(); i++){
        for(int  j = 0; j < s.size(); j++){
            if(i != j && s[i] == s[j])
                return 1;
        }
    }

    return 0;
}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int number;
    cin >> number; 
    
    number++;
    string number_s = to_string(number);
    while(equal_digit(number_s)){
        number++;
        number_s = to_string(number);
    }

    cout << number_s << endl;
    return 0;
}