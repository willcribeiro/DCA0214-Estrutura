/*Dados n n ́umeros inteiros positivos, calcular a soma dos que s ̃ao primos.*/
#include <iostream>
using namespace std;

int main(){
    int n,impar;
    impar = 0;
    cout<<"Entre com a quantidade de n \n";
    cin>>n;
    int vet[n];
    cout<<"Entre com os valores do vetor \n";
    for(int i = 0; i <n; i++)
    {
        cin>>vet[i];
        if (vet[i]%2 == 1) {
            impar = impar + vet[i];
        }
        
    }
    cout<<"\n"<<impar;

}