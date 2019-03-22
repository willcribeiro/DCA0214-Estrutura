#include <iostream>
using namespace std;

int main(){

   int a,b,i,cont,divi;
   float aux1,aux2;
    cout<<"Entre com o valor de A e B \n";
    cin>>a>>b;
    i = 1;
    cont = 2;
    divi =0;
    while(i>0){
        aux1 = a%cont;
        aux2 = b%cont;
        if (aux1 ==0 && aux2 ==0) {
            divi = cont;
            a = a/divi;
            b = b/divi;
            cout<<a<<"/"<<b<<"\n";
            i = 0;
        }

         else if (cont ==9) {
             cout<<"Ja esta reduzido \n";
            i = 0;
        }
        cont++;        
    }      
      
    return 0;
}