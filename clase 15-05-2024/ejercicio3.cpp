#include <iostream>
using namespace std;
int main (){
    
    //Declaramos variables//

    float angulo1=0.00;
    float respuesta=0.00;

    cout <<"Programa para saber que tipo de angulo es" "\n";
    cout <<"Ingrese un angulo" "\n",
    cin >> angulo1;

    if ( angulo1 >=0 && angulo1 <90)
    {
        cout <<" Es un angulo agudo" "\n";

    }else if ( angulo1 >90)
    {
        cout << "Es un angulo obtuso" " \n";
    }else if ( angulo1 =90)
    {
        cout << "Es un angulo recto" "\n";

    }else{
        cout <<"Angulo ingresado no valido" "\n";
    }



    return 0;



}