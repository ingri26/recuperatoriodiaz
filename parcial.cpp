#include <iostream>
#include <iomanip>

using namespace std;


int main(){

char nombreMateria;
int cantMaterias, ponderacion;
double promedioPonderado=0, nota, sumaPonderaciones=0, notas ;



 cout << "Ingresar cantidad de materias a considerar: ";
 cin >> cantMaterias;

    for (int i = 1; i <= cantMaterias; i++){

        cout<<" Ingrese nombre de la materia ";
        cin >> nombreMateria ;
        cout<< "ingrese nota obtenida:";
        cin >> nota;
        cout<< "Ingrese ponderacion de la materia:";
        cin >> ponderacion;

        notas += nota * ponderacion;
        sumaPonderaciones =  sumaPonderaciones + ponderacion ;
        promedioPonderado = notas / sumaPonderaciones;

    }

        cout << fixed << setprecision(2) << promedioPonderado;
        cout << "  <3";

return 0;
}

