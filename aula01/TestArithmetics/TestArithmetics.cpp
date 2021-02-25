/*
*Testando operadores aritmético
*/

#include<iostream>
using namespace std;

int main(){

    int number1, number2;
    int sum, difference, product, quotient, remainder;

    cout << "Entre com os dois inteiros(seoarado com espaço):  ";
    cin >> number1 >> number2;

    sum         = number1 + number2;
    difference  = number1 - number2;
    product     = number1 * number2;
    quotient    = number1 /number2;
    remainder   = number1 % number2;

    cout << "A soma, diferença, produto, quociente, e resto de "
        << number1 << " e " << number2 << " são "
        << sum << ", "
        << difference << ", "
        << product << ", "
        << quotient << ", "
        << remainder << ", ";

        //Incrementação e decrementação
        ++number1;
        --number2;

        cout << "number1 com incrementação é " << number1 << endl;
        cout << "number2 com decrementação é " << number2 << endl;

        quotient =  number1 / number2;
        cout << "O novo quociente do " << number1 << " e "  << number2
            << " é " << quotient << endl; 



    return 0;
}