/*Dados a quantidade de dias de um mˆes e o dia da semana em que o
mˆes come ̧ca, escreva um programa que imprima os dias do mˆes por sem-
ana, linha a linha. Considere o dia da semana 1 como domingo, 2 como
segunda-feira, e assim por diante, at ́e o dia 7 como s ́abado.*/

#include <iostream>
using namespace std;

int main(){

int dia,semana,j,cont;
cout<<"Entre com a quantidade de de dias do mes e o dia da semana \n";
cin>>dia>>semana;

char array[semana];

for( j = 0; j <semana-1; j++)
{
        array[j] = ' ';
        cout<<array[j]<<" ";
}

cont = j+1;
for(int i = 1; i < dia+1; i++)
{    
    
    cout<<i<<" ";
    if (cont%7 == 0) {
        cout<<"\n";
    }
    cont++;
  
}
cout<<"\n";
}

