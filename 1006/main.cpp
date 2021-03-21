#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float A, B, C, MEDIA;
    
    cout<<setprecision(1)<<fixed;
    
    cin>>A;
    cin>>B;
    cin>>C;

    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    
    cout<<"MEDIA = "<<MEDIA<<endl;
    
    return 0;
}
