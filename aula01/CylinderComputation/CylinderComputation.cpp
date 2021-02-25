// imprimir a área da superfície e o volume de um cilindro.
// deve solicitar ao usuário o raio e a altura do cilindro, em doubles.

#include<iostream>
using namespace std;

int main(){
    double radius, height, area, volume;
    const double PI = 3.14159265;

    cout << "Entre com o  raio: ";
    cin >> radius;
    cout << "Entre com o altura: ";
    cin >> height;
    
    //area do cilindro
    area = 2*PI*( radius * radius)*(height + radius);
    // valumedo cilindro
    volume = PI*(radius*radius)*height;

    cout << "area do cilindro: " << area << endl;
    cout << "volume do cilindro: " << volume << endl;

    return 0;
}

