/*Dados um numero inteiro n e n sequencias de numeros inteiros, cada qual
terminada por 0, determinar a soma dos numeros pares de cada sequencia*/
#include <iostream>
using namespace std;

int main(){
int seq,i,soma,max;
max = 500;
soma = 0;
int vet[max];
vet[0] =1;
i = 0;
cout<<"Entre com a quantidade de sequencias \n";
cin>>seq;
cout<<"Entre com a sequencia \n";

for(int j = 0; j < seq; j++)
{
    do
    {
        cin>>vet[i];        
        if (vet[i]%2==0) {
            soma = soma + vet[i];
        }    
        i++;
    } while (vet[i-1]!=0);
    
    cout<<"A soma dos pares eh: "<<soma<<"\n";
    soma =0;
    i=0;
    vet[i] = 1;
}

}

