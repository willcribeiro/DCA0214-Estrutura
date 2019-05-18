//Dado um numero inteiro positivo, verificar se contem dois dígitos sao iguais
#include <iostream>
using namespace std;

int main(){

    int n,resto1,resto2;
    cout<<"Entre com o valor \n";
    cin>>n;
    int i = 1;
    while(i>0){               
        resto1 = n%10;       
        n = n/10;
        resto2 = n%10;        

        if (resto1 == resto2) {
           i = 0;                                                                                                                                                                               
           cout<<"Tem iguais "<<resto1<<" == "<<resto2<<"\n";
        }
        else if (n == 0) {
            i = 0;
            cout<<"Nao tem iguais \n";//
        }
        
    }
    
    return 0;
}