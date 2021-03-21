#include <iostream>	
#include <iomanip>
using namespace std;

int main() {
 
    int NUMBER, numHoras;
    float valorHoras, SALARY;
    
    cin>>NUMBER;
    cin>>numHoras;
    cin>>valorHoras;
    
    SALARY = numHoras * valorHoras;
    
    cout<<setprecision(2)<<fixed;
    
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<"SALARY = U$ "<<SALARY<<endl;    
    
    return 0;
}
