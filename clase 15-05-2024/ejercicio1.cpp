#include <iostream>
using namespace std;
int main (){
    //Declaramos variables//
    int calculo_de_angulos;
    float angulo_1=0.00;
    float angulo_2=0.00;
    float respuesta=0.00; 

    cout << "Programa para calcular el tercer angulo" "\n";
    cout <<"Ingrese el primer angulo" "\n";
    cin >> angulo_1;
    cout <<"Ingrese su segundo angulo " "\n";
    cin >> angulo_2;


    if ((angulo_1 <0 || angulo_2 <0 )||(angulo_1 >180 || angulo_2 >180) )
    {
        cout << "Uno de los valores no esta permitido" "\n";

    }else{
        respuesta=180-angulo_1-angulo_2;

    cout << "El tercer angulo es de" "\n" << respuesta<< "\n";
    }









    return 0;

}
