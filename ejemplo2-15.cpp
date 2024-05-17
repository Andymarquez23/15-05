#include <iostream>
using namespace std;
int main(){
    int edad;
    cout<<"ingresar una edad: \n";
    cin>>edad;
    if(edad>=18){
        cout<<"Mayor de edad \n";
    } else {
        cout<<"Menor de edad \n";
    }
    return 0;
}