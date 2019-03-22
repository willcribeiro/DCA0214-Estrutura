/*Dados um n ́umero inteiro n > 0 e uma sequˆencia de n n ́umeros inteiros
positivos determinar o fatorial de cada n ́umero da sequˆencia.*/
#include <iostream>
using namespace std;

int fatorial(int x){
    if(x == 0 || x ==1){
        return 1;
    }
    return x*fatorial(x-1);
}

int main(){
    int seq;
    cout<<"Entre com a quantidade da sequencia \n";
    cin>>seq;
    int vet[seq];
    cout<<"Entre com os valores \n";
    
    for(int i = 0; i <=seq; i++)
    {
        cin>>vet[i];
        if (vet[i]<=0) {
               while(vet[i]<=0){
                 cout<<"entre com um valor >0 \n";
                 cin>>vet[i];
            } 
        }        
        vet[i] = fatorial(vet[i]);
    }
    cout<<"\n";
    for(int i = 0; i <=seq; i++)
    {
        cout<<vet[i]<<" ";
    }
    
}

