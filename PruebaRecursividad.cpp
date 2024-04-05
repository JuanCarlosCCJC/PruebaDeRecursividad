#include <iostream>

using namespace std;

int factorial (int n){

    if(n == 0 || n == 1){           //Esto sería el caso base, donde 0 y 1 siempre el factorial es 1, por eso lo ponemos así
        return 1;
    } else {
        //Aqui es donde hacemos la llamada recursiva
        return n * factorial(n - 1);
    }

}

int main() {

    int numero=5;

    int resultado  = factorial(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}