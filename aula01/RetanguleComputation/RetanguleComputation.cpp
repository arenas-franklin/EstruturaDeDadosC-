/*
*Imprimir a área e o perímetro de um retângulo. 
* Deve solicitar ao usuário o comprimento e a largura do retângulo, em doubles
*/

#include <iostream>
using namespace std;

int main(){
    double length, width, perimeter;

    cout << "Entre com o comprimento: ";
    cin >> length;
    cout << "Entre com a largura:";
    cin >> width;

    perimeter = (length*2) + (width*2);


    cout << "O vaor do perimetro do retangulo é: " << perimeter << endl;


    return 0;
}