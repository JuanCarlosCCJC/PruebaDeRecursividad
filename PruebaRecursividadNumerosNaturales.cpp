#include <iostream>

using namespace std;

int sumaNaturales(int n){
    //Caso base
    if (n==0){
        return 0;
    } else {
        return n + sumaNaturales(n-1);      //Cuando n-1 sea 0 parará de llamarse a si mismo y se hará todo el codigo
    }
}

int main(){

int n = 10;

int resultado = sumaNaturales(n);

cout << "La suma de naturales de " << n << " es: " << resultado << endl;

}