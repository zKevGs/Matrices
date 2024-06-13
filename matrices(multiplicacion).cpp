#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){

int Fila, fila, Columna, columna;
int Numero, Numero2;


for (int i = 0; i<1; i++){

    cout << "ingrese la cantidad de filas de la primera matriz: ";
    cin >> Fila;
    cout << "ingrese la cantidad de columnas de la primera matriz: ";
    cin >> Columna;

    cout << "ingrese la cantidad de filas de la segunda matriz: ";
    cin >> fila;
    cout << "ingrese la cantidad de columnas de la segunda matriz: ";
    cin >> columna;

}

int Ma[Fila][Columna];
int Ma2[fila][columna];


while (Fila != fila && Columna != columna){

     cout << "ingrese la cantidad de filas de la primera matriz: ";
    cin >> Fila;
    cout << "ingrese la cantidad de columnas de la primera matriz: ";
    cin >> Columna;

    cout << "ingrese la cantidad de filas de la segunda matriz: ";
    cin >> fila;
    cout << "ingrese la cantidad de columnas de la segunda matriz: ";
    cin >> columna;

}

for (int i = 0; i<fila; i++){
    for (int j = 0; j<columna; j++){

    cout << "ingrese el valor de la primera matriz en la posicion [" << i+1 << "] ["<< j+1 << "] : ";
    cin >> Ma[i][j];
    cout << "ingrese el valor de la segunda matriz: ["<< i+1 << "] [" << j+1  << "] : ";
    cin >> Ma2[i][j];
    }
}

int Multi[fila][columna];


for (int i = 0; i< fila; i++){
    for (int j = 0; j < columna; j++){
        for (int k= 0; k < columna; k++){
            Multi [i][j] += Ma[i][k]* Ma2[k][j];
        }
    }
}

for (int i = 0; i< fila; i++){
    for (int j = 0; j<columna; j++){
        cout << Multi[i][j];
    }
    cout << endl;
}





return 0;
}
