#include <iostream>	
#include <iomanip>
using namespace std;
 
int main() {
 
    string nome;
    double salario, vendas, vendasTotal;
    
    cout<<setprecision(2)<<fixed;
    
    cin>>nome;
    cin>>salario;
    cin>>vendas;
    
    vendasTotal = (vendas * 0.15) + salario;
   
    cout<<"TOTAL = R$ "<<vendasTotal<<endl;
    
    return 0;
}
