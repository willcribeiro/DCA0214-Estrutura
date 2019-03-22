#include <iostream>
using namespace std;

int main(){

    int n,aux1,aux2,cont;
    cout<<"Entre com n \n";
    cin>>n;
    aux1 = 1;
    cont = 0;

    while(aux1>0){
        
        aux2 = cont * (cont+1) * (cont+2);
        if (aux2 == n) {
            cout<<"Eh triangular \n";
           cout<<cont<<", "<<(cont+1)<<", "<<(cont+2);
           aux1 = 0;
        }

        else if (aux2 > n) {
            cout<<"Nao eh triangular \n";
            aux1 = 0;
        }
        cont++;
        
    
    }
    
    
    return 0;
}