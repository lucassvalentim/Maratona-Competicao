#include <iostream>
using namespace std;


int main(){
    
    int q, d, p;
    int paginas;

    cin >> p >> d >> q;

    while(p != 0){
        
        paginas = (p * q * d)/(q - p);
        
        if(paginas == 1) cout << paginas  << " pagina" << "\n";
        else cout << paginas  << " paginas" << "\n";
    
        cin >> p >> d >> q;
    }
}