#include <iostream>

using namespace std;

int potenciaDeUnNumero (int numero, int elevacion){

    //Caso base
    if(elevacion==1){
        return numero;
    } else {
        return numero * potenciaDeUnNumero(numero,(elevacion-1)); 
    }

}

int main() {
    int numero = 5;
    int elevacion = 5;

    int resultado = potenciaDeUnNumero(numero,elevacion);

    cout << "La potencia de " << numero << " es igual a: " << resultado << endl;
}
