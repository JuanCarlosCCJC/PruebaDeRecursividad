#include <iostream>

using namespace std;

int factorial (int n){

    if(n == 0 || n == 1){           //Esto sería el caso base, donde 0 y 1 siempre el factorial es 1, por eso lo ponemos así
        return 1;
    } else {
        //Aqui es donde hacemos la llamada recursiva
        return n * factorial(n - 1);        //Basicamente se van llamando hasta llegar a 1 que te devuelve 1 
        //y cuando llega a este sube todos los escalones hasta llegar a la 1 llamada y da un resultado, para cuando ya no se llama a si mismo.
    }

}

int main() {

    int numero=5;

    int resultado  = factorial(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}