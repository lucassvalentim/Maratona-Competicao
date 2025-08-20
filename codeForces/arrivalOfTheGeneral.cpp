#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int maior_elemento(vector<int> &numbers){
    int index_maior = 0;
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > numbers[index_maior]){
            index_maior = i;
        }
    }

    return index_maior;
}

int menor_elemento(vector<int> &numbers){
    int index_menor = 0;
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] <= numbers[index_menor]){
            index_menor = i;
        }
    }

    return index_menor;
}

int main(){

    int resultado = 0;

    int n; cin >> n;

    vector<int> numbers(n);
    for(int &x : numbers) cin >> x;

    int index_maior = maior_elemento(numbers);
    for(int i = index_maior; i > 0; i--){
        swap(numbers[i-1], numbers[i]);
        resultado++;
    }

    int index_menor = menor_elemento(numbers);
    for(int i = index_menor; i < n - 1; i++){
        swap(numbers[i], numbers[i + 1]);
        resultado++;
    }

    cout << resultado << endl;
    return 0;
}