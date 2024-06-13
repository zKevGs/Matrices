#include <iostream>
#include <iostream>

using namespace std;


int main(){

int Filas = 3;
int Columnas = 3;


int matris[Filas][Columnas]{


    {1,2,3},
    {4,5,6},
    {7,8,9},

};

int matris2[Filas][Columnas]{


    {1,2,3},
    {4,5,6},
    {7,8,9},

};

int matris3[Filas][Columnas];

for (int i = 0; i< 3; i++){
    for (int j= 0; j< 3; j++){
        matris3 [i][j] = matris[i][j] + matris2[i][j];
    }
}

for (int i = 0; i< 3; i++){
    for (int j= 0; j< 3; j++){
       cout << matris3 [i][j] ;
    }
}




return 0;
}
