#include <iostream>
using namespace std;
int main(){
    
    //Declaramos variables//

    int edad=0;
    int respuesta=0;


    cout <<"Ingrese su edad" "\n";
    cin >> edad;

    if ( edad >= 0 && edad <=17 )
    {
        cout <<"Es menor de edad" "\n";

    }else if ( edad >=18 )
    {
        cout << "Es mayor de edad" "\n";

    }else{
            cout << " Edad no valida" "\n";
    }
    return 0;


}