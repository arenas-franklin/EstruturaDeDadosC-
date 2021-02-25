/*
* Solicita ao usuário dois inteiros e imprime sua soma, diferença, produto e quociente
*(IntegerArithmetic.cpp )
*/

#include<iostream>
using namespace std;

int main(){
    //declaração das variaveis
    int firstInt;
    int secondInt;
    int sum, difference, product, quotient;

    
    cout << "Entre com primerio numero interio: ";
    cin >> firstInt;
    cout << "Entre com segunndo numero inteiro: ";
    cin >> secondInt;

    sum = firstInt + secondInt;
    difference = firstInt - secondInt;
    product = firstInt * secondInt;
    quotient = firstInt / secondInt;

    //printar os resultados
    cout << "A soma é: " << sum << endl;
    cout << "A diferença é: " << difference << endl;
    cout << "O produto é: "  << product << endl;
    cout << "O quociente é: " << quotient << endl;

    return 0;
}
