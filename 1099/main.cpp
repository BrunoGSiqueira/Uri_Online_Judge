#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo 
dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.

Exemplo de Entrada	Exemplo de Saída
7					0

4 5					11

13 10				5				

6 4					0	
	
3 3					0	
		
3 5					0

3 4					12

3 8


*/

int main() 
{
	
	int X, Y, N, SOMA = 0;
	
	cin>>N;
		
	for(int j = 0; j<N; j+=1)
	{
		cin>>X;
		cin>>Y; 
		SOMA = 0;
		if(X%2 == 0)
		{
			X+=1;	
		}
		for(int i = X+2 ; i<Y; i+=2) 
		{
			SOMA = SOMA + i;	
		}
		cout<<SOMA<<endl;
	}

	return 0;
}
