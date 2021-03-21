#include <iostream>	
#include <iomanip>
using namespace std;
 
int main() {

    double VOLUME, R; 
    double pi = 3.14159;
    
    cout<<setprecision(3)<<fixed;
    
    cin>>R;
    
    VOLUME = (4.0/3)*pi*(R*R*R);
    
    cout<<"VOLUME = "<<VOLUME<<endl;
    
    return 0;
}
