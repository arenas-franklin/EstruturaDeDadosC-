/**
*Solicita ao usuário o raio de um circulo e cacula sua área e circunferencia
*(CircleComputation.cpp)
*/

#include<iostream>
using namespace std;

int main(){
    double radius, circunference, area; // declaraçao de três vaiaveis float
    const double PI = 3.14159265; // declaração e definiçao do valor de PI

    cout << "Entre com o raio: ";   
    cin >> radius;

    //calcular a area e a circunferencia
    area = radius * radius * PI;
    circunference = 2.0 * radius * PI;


    //imprimir os resultados
    cout << "O raio é: " << radius << endl;
    cout << "A Area é: "<< area << endl;
    cout << "A circunferencia é: "<< area << endl;

    return 0;

}