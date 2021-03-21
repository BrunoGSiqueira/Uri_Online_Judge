#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    cout<<setprecision(3)<<fixed;
    
    int X;
    float Y, MEDIA;
   
    cin>>X;
    cin>>Y;
    
    MEDIA = X / Y;
    
    cout<<MEDIA<<" km/l"<<endl;
    return 0;
}
