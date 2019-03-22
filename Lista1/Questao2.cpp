//Dado um numero inteiro positivo, verificar se o primeiro e o ultimo digito sao iguais
#include <iostream>
using namespace std;

int main(){

    int n,resto1,resto2;
    cout<<"Entre com o valor \n";
    cin>>n;
    int i = 1;
    if (n >9) {
        resto1 = n%10; 
        while(n>0){       
            resto2 = n%10; 
            n = n/10;                   
        }
    } 
    else
    {
        cout<<"Numero invalido \n";
    }
    
    if (resto1 == resto2) {
        cout<<"O primeiro eh igual ao ultimo \n";
    }
    else
    {
        cout<<"O primeiro eh diferente do ultimo \n";
    }      
    return 0;
}