//Dado um numero inteiro positivo, verificar se o primeiro e o ultimo digito sao iguais
#include <iostream>
using namespace std;

int main(){

    int n,i,j,aux1,aux2,cont1,cont2,k;

    cout<<"Entre com n \n";
    cin>>n;
    cout<<"Entre com I \n";
    cin>>i;
    cout<<"Entre com J \n";
    cin>>j;
    cont1=0;
    
    cont1 = 0;
    k = 0;
    while(cont1<n){
        aux1 = k%i;
        aux2 = k%j;
              
        if (aux1==0 || aux2==0) {
            cont1++;
            cout<<k<<", ";   
            
        }
        k++;       
              
    }
    
    return 0;
}