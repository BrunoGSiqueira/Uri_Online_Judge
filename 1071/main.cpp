#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
/*

URI Online Judge | 1071
Soma de Impares Consecutivos I
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.

Exemplo de Entrada	Exemplo de Saída
6					
-5					5

15
12					13

12
12					0
*/

int main()
 {
	int X, Y, SOMA = 0;
	
	cin>>X;
	cin>>Y; 
		
	if(X%2 == 0)
	{
		X+=1;	
	}
	for(int i = 0 ; i<Y; i+=2) 
	{
		SOMA = SOMA + i;	
	}
	cout<<SOMA<<endl;

	return 0;
}
